#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}


TEST_CASE("Test function get_dna_p_distance") 
{
	REQUIRE(get_dna_p_distance("GAGCCTACTAACGGGAT", "CATCGTAATGACGGCCT") == .4118);
	REQUIRE(get_dna_p_distance("GAGCCTACTAACGGGAT", "GATCGTAATGACGGCCT") == .3529);
}


TEST_CASE("Test function transcribe_dna_into_rna") 
{
	REQUIRE(transcribe_dna_into_rna("GATGGAACTTGACTACGTAAATT") == ("GAUGGAACUUGACUACGUAAAUU"));
}

TEST_CASE("Test function get_cookie_ingredients") 
{
	REQUIRE(get_cookie_ingredients(48)[0] == 1.5);
	REQUIRE(get_cookie_ingredients(48)[1] == 1);
	REQUIRE(get_cookie_ingredients(48)[2] == 2.75);

	REQUIRE(get_cookie_ingredients(96)[0] == 3);
	REQUIRE(get_cookie_ingredients(96)[1] == 2);
	REQUIRE(get_cookie_ingredients(96)[2] == 5.5);

	REQUIRE(get_cookie_ingredients(24)[0] == 0.75);
	REQUIRE(get_cookie_ingredients(24)[1] == 0.5);
	REQUIRE(get_cookie_ingredients(24)[2] == 1.375);
}

TEST_CASE("Test function get_hours") 
{
	REQUIRE(get_hours(1570846218) == 2);
	REQUIRE(get_hours(1570875018) == 10);
}

TEST_CASE("Test function get_minutes") 
{
	REQUIRE(get_minutes(1570846218) == 10);
	REQUIRE(get_minutes(1570875018) == 10);
}

TEST_CASE("Test function get_seconds") 
{
	REQUIRE(get_seconds(1570846218) == 18);
	REQUIRE(get_seconds(1570875018) == 18);
}