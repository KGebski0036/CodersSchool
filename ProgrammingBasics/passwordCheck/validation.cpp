#include "validation.hpp"

ErrorCode checkPassword(const std::string& password, const std::string& passwordRepeated) {

	if (!doPasswordsMatch(password, passwordRepeated))
		return ErrorCode::PasswordsDoNotMatch;

	return checkPasswordRules(password);
}

std::string getErrorMessage(const ErrorCode& errorCode) {
	switch (errorCode)
	{
		case ErrorCode::Ok:
			return "Ok";
			break;
		case ErrorCode::PasswordNeedsAtLeastNineCharacters:
			return "Password needs to have at least nine characters";
			break;
		case ErrorCode::PasswordNeedsAtLeastOneNumber:
			return "Password needs to have at least one number";
			break;
		case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
			return "Password needs to have at least one special character";
			break;
		case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
			return "Password needs to have at least one uppercase letter";
			break;
		case ErrorCode::PasswordsDoNotMatch:
			return "Passwords do not match";
			break;
		default:
			return "Undefined error";
			break;
	}
}

bool doPasswordsMatch(const std::string& password, const std::string& passwordRepeated) {
	return (password == passwordRepeated);
}

auto isNumber = [](char ch){return (ch >= '0' && ch <= '9');};
auto isSpecialCharacter = [](char ch){return isalnum(ch) == 0;};

ErrorCode checkPasswordRules(const std::string& password) {
	if (password.size() < 9)
		return ErrorCode::PasswordNeedsAtLeastNineCharacters;
	if (std::none_of(password.begin(), password.end(), isNumber))
		return ErrorCode::PasswordNeedsAtLeastOneNumber;
	if (std::none_of(password.begin(), password.end(), isSpecialCharacter))
		return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
	if (std::none_of(password.begin(), password.end(), isupper))
		return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
	return ErrorCode::Ok;
}
