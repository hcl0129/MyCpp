int main()
{
	const int i = 42;
	const auto  &k = i;
	//const const int p = 12;
	const auto j = i, &k2 = i;
	auto q = i;
	q = 12;
}
