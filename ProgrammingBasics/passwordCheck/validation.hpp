#pragma once

#include <string>
#include <algorithm>

enum class ErrorCode {
	Ok,
	PasswordNeedsAtLeastNineCharacters,
	PasswordNeedsAtLeastOneNumber,
	PasswordNeedsAtLeastOneSpecialCharacter,
	PasswordNeedsAtLeastOneUppercaseLetter,
	PasswordsDoNotMatch,
};

ErrorCode checkPassword(const std::string& password, const std::string& passwordRepeated);

std::string getErrorMessage(const ErrorCode& errorCode);
bool doPasswordsMatch(const std::string& password, const std::string& passwordRepeated);
ErrorCode checkPasswordRules(const std::string& password);
