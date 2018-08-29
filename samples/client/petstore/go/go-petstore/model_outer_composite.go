/*
 * OpenAPI Petstore
 *
 * This spec is mainly for testing Petstore server and contains fake endpoints, models. Please do not use this for any other purpose. Special characters: \" \\
 *
 * API version: 1.0.0
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package petstore

type OuterComposite struct {
	MyNumber  float32 `json:"my_number,omitempty"`
	MyString  string  `json:"my_string,omitempty"`
	MyBoolean bool    `json:"my_boolean,omitempty"`
}
