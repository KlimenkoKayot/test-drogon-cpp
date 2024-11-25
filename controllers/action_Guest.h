#pragma once

#include <drogon/HttpController.h>

using namespace drogon;

namespace action
{
class Guest : public drogon::HttpController<Guest>
{
  public:
    METHOD_LIST_BEGIN
    METHOD_ADD(Guest::Welcome, "/welcome",Get);
    METHOD_ADD(Guest::SignIn, "/signin?login={1}&password={2}",Post);
    METHOD_ADD(Guest::SignUp, "/signup?login={1}&password={2}",Post);
    METHOD_LIST_END

    void Welcome(const HttpRequestPtr &req, 
        std::function<void(const HttpResponsePtr &)> &&callback) const;

    void SignIn(const HttpRequestPtr &req, 
        std::function<void(const HttpResponsePtr &)> &&callback,
        const std::string &login,
        const std::string &password) const;

    void SignUp(const HttpRequestPtr &req,
        std::function<void(const HttpResponsePtr &)> &&callback,
        const std::string &login,
        const std::string &password) const;    

};
}
