target_sources(merge_sort
	PRIVATE
		sortings.cpp
		sortings.hpp
)

target_include_directories(merge_sort PRIVATE
	"${PROJECT_SOURCE_DIR}/includes"
)