#pragma once
namespace ProfEmanuel {
	class ItemRender {
	protected:
		int renderID = 0;
	public:
		virtual void ShowImage() = 0;

		virtual ~ItemRender() {

		}

		void SetRenderID(int someIndex) {
			renderID = someIndex;
		}
	};
}