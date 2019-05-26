bool judge_upper(const string &s){
	//判断string对象中是否含有大写字母
	//若是，返回true；否则，返回false
	for (auto c : s)
	{
		if (isupper(c)) return true;
	}
	return false;
}
