size_t count_calls(int n)
//第一次被调用时返回0，以后每次被调用时返回值加一
{
	static size_t ctr = 0;    
	++ctr;
	return ctr;
}
