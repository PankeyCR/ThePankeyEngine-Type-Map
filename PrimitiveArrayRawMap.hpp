#pragma once

#include "ArrayRawPointerMap.hpp"
#include "RawMap.hpp"

namespace pankey{

	namespace DataStructure{

		namespace Map{

			template <class Policy>
			class PrimitiveArrayRawMap : public ArrayRawPointerMap<Policy> , public RawMap<Policy>{
				public:
					using Key_Type = typename Policy::Key_Type;
					using Value_Type = typename Policy::Value_Type;

				protected:
					virtual Key_Type** createKeyPointerArray(int a_size) override{
						if(a_size <= 0){
							return nullptr;
						}
						return new Key_Type*[a_size]{};
					}

					virtual Value_Type** createValuePointerArray(int a_size) override{
						if(a_size <= 0){
							return nullptr;
						}
						return new Value_Type*[a_size]{};
					}

					virtual void destroyKeyPointerArray(Key_Type** a_pointer) override{
						delete[] a_pointer;
					}

					virtual void destroyValuePointerArray(Value_Type** a_pointer) override{
						delete[] a_pointer;
					}
			};

		}

	}

}
