#pragma once

enum Status { Pending, Approved, Canceled };
enum class FileError { notFound, ok };
enum class NetworkError { clientError, serverError, ok };
