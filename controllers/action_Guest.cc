#include "action_Guest.h"
#include <iostream>

using namespace std;
using namespace action;

void action::Guest::Welcome(const HttpRequestPtr &req, 
    std::function<void(const HttpResponsePtr &)> &&callback) const
{
    HttpViewData data;
    auto resp=HttpResponse::newHttpViewResponse("welcome.csp",data);
    callback(resp);
}

// Add definition of your processing function here
void Guest::SignIn(const HttpRequestPtr &req,
    function<void(const HttpResponsePtr &)> &&callback,
    const std::string &login,
    const std::string &password) const
{
    std::cout << "login: " << login << ' ' << "password: " << password << '\n';
    if (login == "admin" && password == "admin") {
        callback(drogon::HttpResponse::newRedirectionResponse("https://vk.com/lkayot"));
    } else {
        callback(drogon::HttpResponse::newRedirectionResponse("https://vk.com/stalcraft"));
    }
}

void Guest::SignUp(const HttpRequestPtr &req,
    function<void(const HttpResponsePtr &)> &&callback,
    const std::string &login,
    const std::string &password) const
{
    cout << "User " << login << " signed up!";
    Json::Value ret;
    ret["result"] = "SignUp";
    ret["login"] = login;
    ret["password"] = password;
    auto resp = HttpResponse::newHttpJsonResponse(ret);
    callback(resp);
}