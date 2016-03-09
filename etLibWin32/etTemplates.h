#pragma once
#ifndef __ETTEMPLATES__

template<typename T>
inline T CallWithMax(const T& a_, const T & b_) {
	return f(a_ > b_ ? a_ : b_);
}



#endif // __ETTEMPLATES__
