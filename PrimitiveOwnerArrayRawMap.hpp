#pragma once

#include "PrimitiveArrayRawMap.hpp"

namespace pankey{

	namespace DataStructure{

		namespace Map{

			template <class Policy>
			class PrimitiveOwnerArrayRawMap : public PrimitiveArrayRawMap<Policy>{
				public:
					using Key_Type = typename Policy::Key_Type;
					using Value_Type = typename Policy::Value_Type;

				protected:
					
					virtual Key_Type* createKeyPointer(){
						return new Key_Type();
					}
					
					virtual Value_Type* createValuePointer(){
						return new Value_Type();
					}
					
					virtual void destroyKeyPointer(Key_Type* a_pointer){
						delete a_pointer;
					}

					virtual void destroyValuePointer(Value_Type* a_pointer){
						delete a_pointer;
					}
			};

		}

	}

}
