#pragma once

#include "Settings.hpp"
#include "PrimitiveOwnerArrayRawMap.hpp"
#include "PrimitiveMapPolicy.hpp"

namespace pankey{

	namespace Type{

		namespace Map{

			template<typename K>
			class DefaultSettings : public Settings<K>{
				public:
					DefaultSettings(){}

					virtual ~DefaultSettings(){}

					using Settings<K>::getInt;
					using Settings<K>::getLong;
					using Settings<K>::getFloat;
					using Settings<K>::getNote;
					using Settings<K>::getBoolean;

					virtual void putInt(const K& a_name, int a_var){
						m_int_map.putValues(a_name, a_var);
					}

					virtual void setInt(const K& a_name, int a_var){
						if(m_int_map.containKey(a_name)){
							m_int_map.setValues(a_name, a_var);
						}else{
							m_int_map.addValues(a_name, a_var);
						}
					}

					virtual int getInt(const K& a_name){
						return m_int_map.getKey(a_name);
					}

					virtual void removeInt(const K& a_name){
						m_int_map.destroyByKey(a_name);
					}

					virtual bool containInt(const K& a_name){
						return m_int_map.containKey(a_name);
					}

					virtual void putLong(const K& a_name, long a_var){
						m_long_map.putValues(a_name, a_var);
					}

					virtual void setLong(const K& a_name, long a_var){
						if(m_long_map.containKey(a_name)){
							m_long_map.setValues(a_name, a_var);
						}else{
							m_long_map.addValues(a_name, a_var);
						}
					}

					virtual long getLong(const K& a_name){
						return m_long_map.getKey(a_name);
					}

					virtual void removeLong(const K& a_name){
						m_long_map.destroyByKey(a_name);
					}

					virtual bool containLong(const K& a_name){
						return m_long_map.containKey(a_name);
					}
					


					virtual void putFloat(const K& a_name, float a_var){
						m_float_map.putValues(a_name, a_var);
					}

					virtual void setFloat(const K& a_name, float a_var){
						if(m_float_map.containKey(a_name)){
							m_float_map.setValues(a_name, a_var);
						}else{
							m_float_map.addValues(a_name, a_var);
						}
					}

					virtual float getFloat(const K& a_name){
						return m_float_map.getKey(a_name);
					}

					virtual void removeFloat(const K& a_name){
						m_float_map.destroyByKey(a_name);
					}

					virtual bool containFloat(const K& a_name){
						return m_float_map.containKey(a_name);
					}
					


					virtual void putNote(const K& a_name, const K& a_var){
						m_chars_map.putValues(a_name, a_var);
					}

					virtual void setNote(const K& a_name, const K& a_var){
						if(m_chars_map.containKey(a_name)){
							m_chars_map.setValues(a_name, a_var);
						}else{
							m_chars_map.addValues(a_name, a_var);
						}
					}

					virtual K getNote(const K& a_name){
						return m_chars_map.getKey(a_name);
					}

					virtual void removeNote(const K& a_name){
						m_chars_map.destroyByKey(a_name);
					}

					virtual bool containNote(const K& a_name){
						return m_chars_map.containKey(a_name);
					}
					


					virtual void putBoolean(const K& a_name, bool a_var){
						m_boolean_map.putValues(a_name, a_var);
					}

					virtual void setBoolean(const K& a_name, bool a_var){
						if(m_boolean_map.containKey(a_name)){
							m_boolean_map.setValues(a_name, a_var);
						}else{
							m_boolean_map.addValues(a_name, a_var);
						}
					}

					virtual bool getBoolean(const K& a_name){
						return m_boolean_map.getKey(a_name);
					}

					virtual void removeBoolean(const K& a_name){
						m_boolean_map.destroyByKey(a_name);
					}

					virtual bool containBoolean(const K& a_name){
						return m_boolean_map.containKey(a_name);
					}
					
					
				protected:
					pankey::DataStructure::Map::PrimitiveOwnerArrayRawMap<pankey::DataStructure::Map::PrimitiveMapPolicy<K,int>> m_int_map;
					pankey::DataStructure::Map::PrimitiveOwnerArrayRawMap<pankey::DataStructure::Map::PrimitiveMapPolicy<K,long>> m_long_map;
					pankey::DataStructure::Map::PrimitiveOwnerArrayRawMap<pankey::DataStructure::Map::PrimitiveMapPolicy<K,float>> m_float_map;
					pankey::DataStructure::Map::PrimitiveOwnerArrayRawMap<pankey::DataStructure::Map::PrimitiveMapPolicy<K,K>> m_chars_map;
					pankey::DataStructure::Map::PrimitiveOwnerArrayRawMap<pankey::DataStructure::Map::PrimitiveMapPolicy<K,bool>> m_boolean_map;
			};

		}

	}

}