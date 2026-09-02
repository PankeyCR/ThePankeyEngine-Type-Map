#pragma once

#include "CharArray.hpp"

namespace pankey{

	namespace Type{

		namespace Map{
	
			template<typename K>
			class Settings{
				public:
					Settings() = default;

					Settings(const Settings&) = delete;
					Settings& operator=(const Settings&) = delete;

					Settings(Settings&&) = delete;
					Settings& operator=(Settings&&) = delete;

					virtual ~Settings(){}
					
					virtual void putInt(const K& a_name, int a_var)=0;
					virtual void setInt(const K& a_name, int a_var)=0;
					virtual int getInt(const K& a_name)=0;
					int getInt(const K& a_name, int a_default){
						if(containInt(a_name)){
							return getInt(a_name);
						}else{
							return a_default;
						}
					}
					virtual void removeInt(const K& a_name)=0;
					virtual bool containInt(const K& a_name)=0;
					
					virtual void putLong(const K& a_name, long a_var)=0;
					virtual void setLong(const K& a_name, long a_var)=0;
					virtual long getLong(const K& a_name)=0;
					long getLong(const K& a_name, long a_default){
						if(containLong(a_name)){
							return getLong(a_name);
						}else{
							return a_default;
						}
					}
					virtual void removeLong(const K& a_name)=0;
					virtual bool containLong(const K& a_name)=0;
					
					virtual void putFloat(const K& a_name, float a_var)=0;
					virtual void setFloat(const K& a_name, float a_var)=0;
					virtual float getFloat(const K& a_name)=0;
					float getFloat(const K& a_name, float a_default){
						if(containFloat(a_name)){
							return getFloat(a_name);
						}else{
							return a_default;
						}
					}
					virtual void removeFloat(const K& a_name)=0;
					virtual bool containFloat(const K& a_name)=0;
					
					virtual void putNote(const K& a_name, const K& a_var)=0;
					virtual void setNote(const K& a_name, const K& a_var)=0;
					virtual K getNote(const K& a_name)=0;
					K getNote(const K& a_name, const K& a_default){
						if(containNote(a_name)){
							return getNote(a_name);
						}else{
							return a_default;
						}
					}
					virtual void removeNote(const K& a_name)=0;
					virtual bool containNote(const K& a_name)=0;
					
					virtual void putBoolean(const K& a_name, bool a_var)=0;
					virtual void setBoolean(const K& a_name, bool a_var)=0;
					virtual bool getBoolean(const K& a_name)=0;
					bool getBoolean(const K& a_name, bool a_default){
						if(containBoolean(a_name)){
							return getBoolean(a_name);
						}else{
							return a_default;
						}
					}
					virtual void removeBoolean(const K& a_name)=0;
					virtual bool containBoolean(const K& a_name)=0;
			};

		}

	}

}
