//
bool test_config()
{
    return true;
}

int get_seconds(int seconds_since_1970)
{
  double seconds;

  seconds = seconds_since_1970 % 60;

  return seconds;
}

int get_minutes(int seconds_since_1970)
{
  int minutes_since_1970;
  double minutes_now;

  minutes_since_1970 = seconds_since_1970 / 60;

  minutes_now = minutes_since_1970 % 60;

  return minutes_now;
}

int get_hours(int seconds_since_1970)
{
  int minutes_since_1970;
  int hours_since_1979;
  double hours_now;

  minutes_since_1970 = seconds_since_1970 / 60;

  hours_since_1979 = minutes_since_1970 / 60;

  hours_now = hours_since_1979 % 24;

  return hours_now;
}