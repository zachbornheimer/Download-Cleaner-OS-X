/*
 * Set up the Downloads Directory
 *     Shell script is annoying, so C is the answer! ;)
 *  by Z. Bornheimer
 */
int main()
{
	system("rm -R /Users/zbornheimer/Downloads");
	system("mkdir -p /tmp/Downloads");
	system("ln -s /tmp/Downloads/ /Users/zbornheimer/Downloads");
	system("chmod 777 /Users/zbornheimer/Downloads");
	system("chown -R zbornheimer /Users/zbornheimer/Downloads");
	system("killall -KILL Dock");

	return 0;
}
