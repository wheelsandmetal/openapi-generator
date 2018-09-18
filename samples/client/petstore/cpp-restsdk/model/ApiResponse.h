/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.3.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ApiResponse.h
 *
 * Describes the result of uploading an image resource
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ApiResponse_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ApiResponse_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// Describes the result of uploading an image resource
/// </summary>
class  ApiResponse
    : public ModelBase
{
public:
    ApiResponse();
    virtual ~ApiResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ApiResponse members

    /// <summary>
    /// 
    /// </summary>
    int32_t getCode() const;
    bool codeIsSet() const;
    void unsetCode();
    void setCode(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getType() const;
    bool typeIsSet() const;
    void unsetType();
    void setType(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMessage() const;
    bool messageIsSet() const;
    void unsetMessage();
    void setMessage(utility::string_t value);

protected:
    int32_t m_Code;
    bool m_CodeIsSet;
    utility::string_t m_Type;
    bool m_TypeIsSet;
    utility::string_t m_Message;
    bool m_MessageIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ApiResponse_H_ */
