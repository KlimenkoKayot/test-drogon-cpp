//this file is generated by program(drogon_ctl) automatically,don't modify it!
#include "welcome.h"
#include <drogon/utils/OStringStream.h>
#include <string>
#include <map>
#include <vector>
#include <set>
#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <list>
#include <deque>
#include <queue>
using namespace drogon;
std::string welcome::genText(const DrTemplateData& welcome_view_data)
{
	drogon::OStringStream welcome_tmp_stream;
	std::string layoutName{""};
	welcome_tmp_stream << "<html data-bs-theme=\"light\" lang=\"en\">\n";
	welcome_tmp_stream << "    <head>\n";
	welcome_tmp_stream << "        <meta charset=\"utf-8\">\n";
	welcome_tmp_stream << "        <meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0, shrink-to-fit=no\">\n";
	welcome_tmp_stream << "        <title>SecretTalk</title>\n";
	welcome_tmp_stream << "        <link href=\"https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css\" rel=\"stylesheet\" integrity=\"sha384-QWTKZyjpPEjISv5WaRU9OFeRpok6YctnYmDr5pNlyT2bRjXh0JMhjY6hW+ALEwIH\" crossorigin=\"anonymous\">\n";
	welcome_tmp_stream << "    </head>\n";
	welcome_tmp_stream << "    <body style=\"color: var(--bs-body-bg);background: var(--bs-body-color);\">\n";
	welcome_tmp_stream << "        <div class=\"d-flex justify-content-center align-items-center justif-content-sm-center align-items-sm-center justify-content-md-center align-items-md-center justify-content-lg-center align-items-lg-center justify-content-xl-center align-items-xl-center\" style=\"position: absolute;width: 100%;height: 100%; color: var(--bs-body-bg); background: var(--bs-secondary-color);\">\n";
	welcome_tmp_stream << "            <p>Welcome!</p>\n";
	welcome_tmp_stream << "        </div>\n";
	welcome_tmp_stream << "        <script src=\"https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/js/bootstrap.bundle.min.js\" integrity=\"sha384-YvpcrYf0tY3lHB60NNkmXc5s9fDVZLESaAA55NDzOxhy9GkcIdslK1eN7N6jIeHz\" crossorigin=\"anonymous\"></script>\n";
	welcome_tmp_stream << "    </body>\n";
	welcome_tmp_stream << "</html>\n";
if(layoutName.empty())
{
std::string ret{std::move(welcome_tmp_stream.str())};
return ret;
}else
{
auto templ = DrTemplateBase::newTemplate(layoutName);
if(!templ) return "";
HttpViewData data = welcome_view_data;
auto str = std::move(welcome_tmp_stream.str());
if(!str.empty() && str[str.length()-1] == '\n') str.resize(str.length()-1);
data[""] = std::move(str);
return templ->genText(data);
}
}