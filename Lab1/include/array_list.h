// array_list.h
namespace ssuds
{

	class ArrayList
	{
		/// <summary>
		/// Declaring ArrayList class
		/// </summary>
	protected:
		std::string* mData;	
		unsigned int mSize;
	public:
		ArrayList();
		~ArrayList();
		void append(std::string s);
		unsigned int size();
		
		void insert(std::string s, unsigned int location);
		void clear();
		void get(int index);
		void find(std::string s, int index, 0);
		void remove(int index);
		void remove_all(std::string);
	};
}
