#pragma once

#include "stdafx.h"

#include <string>
#include <sstream>
#include <cstdarg>

size_t curl_write_stringstream_callback(char *buf, size_t size, size_t nmemb, std::stringstream &ss);

std::string string_format(const std::string &fmt, ...);

bool isnumber(const std::string &s);
