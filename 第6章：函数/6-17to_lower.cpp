void to_lower(string &s){
	//将string对象全改成小写
	for (auto &c : s)
	{
		c = tolower(c);
	}
}
