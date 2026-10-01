#pragma once

namespace pankey{

	namespace DataStructure{

		namespace Map{

			template <class K, class V, class S = int>
			struct PrimitiveMapPolicy{
				using Key_Type = K;
				using Value_Type = V;
				using Size_Type = S;
			};

		}

	}

}
