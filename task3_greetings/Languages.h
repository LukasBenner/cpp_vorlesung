#pragma once
#include <map>
#include <string>

enum class Language
{
	german,
	italian,
	chinese,
	spanish,
	russian,
	japanese,
	english,
	french
};

static std::map<Language, std::string> greetings = {
	{Language::german, "Hallo"},
	{Language::italian, "Ciao"},
	{Language::chinese, "你好"},
	{Language::spanish, "Hola"},
	{Language::japanese, "こんにちは"},
	{Language::english, "Hello"},
	{Language::french, "Bonjour"},
	{Language::russian, "Привет"},
};


