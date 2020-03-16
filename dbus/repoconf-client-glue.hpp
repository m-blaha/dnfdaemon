
/*
 * This file was automatically generated by sdbus-c++-xml2cpp; DO NOT EDIT!
 */

#ifndef __sdbuscpp__repoconf_client_glue_hpp__proxy__H__
#define __sdbuscpp__repoconf_client_glue_hpp__proxy__H__

#include <sdbus-c++/sdbus-c++.h>
#include <string>
#include <tuple>

namespace org {
namespace rpm {
namespace dnf {
namespace v1 {
namespace rpm {

class RepoConf_proxy
{
public:
    static constexpr const char* INTERFACE_NAME = "org.rpm.dnf.v1.rpm.RepoConf";

protected:
    RepoConf_proxy(sdbus::IProxy& proxy)
        : proxy_(proxy)
    {
    }

    ~RepoConf_proxy() = default;

public:
    std::vector<std::map<std::string, sdbus::Variant>> list(const std::vector<std::string>& ids)
    {
        std::vector<std::map<std::string, sdbus::Variant>> result;
        proxy_.callMethod("list").onInterface(INTERFACE_NAME).withArguments(ids).storeResultsTo(result);
        return result;
    }

    std::map<std::string, sdbus::Variant> get(const std::string& id)
    {
        std::map<std::string, sdbus::Variant> result;
        proxy_.callMethod("get").onInterface(INTERFACE_NAME).withArguments(id).storeResultsTo(result);
        return result;
    }

    std::vector<std::string> enable(const std::vector<std::string>& ids)
    {
        std::vector<std::string> result;
        proxy_.callMethod("enable").onInterface(INTERFACE_NAME).withArguments(ids).storeResultsTo(result);
        return result;
    }

    std::vector<std::string> disable(const std::vector<std::string>& ids)
    {
        std::vector<std::string> result;
        proxy_.callMethod("disable").onInterface(INTERFACE_NAME).withArguments(ids).storeResultsTo(result);
        return result;
    }

private:
    sdbus::IProxy& proxy_;
};

}}}}} // namespaces

#endif