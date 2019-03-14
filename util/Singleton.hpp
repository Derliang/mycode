#ifndef __DL_SINGLETON_H__
#define __DL_SINGLETON_H__
#include <mutex>
namespace DL{
	template<typename T>
	class Singleton {
	public:
		static T& instance(){
			if(_instance == NULL) {
				mutex.lock();
				if(_instance == NULL) {
					_instance = new T;
				}
				mutex.unlock();
			}
			return *_instance;
		}
	private:
		Singleton(){}
		~Singleton(){}
		Singleton(Singleton& rs) =delete;
		Singleton& operator=(Singleton& rs)=delete;
		
		static std::mutex  mutex;
		static T* _instance;
	};

	template<typename T>
	std::mutex Singleton<T>::mutex;

	template<typename T>
	T* Singleton<T>::_instance = nullptr;
}
#endif
