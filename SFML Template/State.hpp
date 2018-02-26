#pragma once

namespace Sonar {
	// https://msdn.microsoft.com/ru-ru/library/5cb46ksf.aspx
	class State {
	public:
		virtual void Init() = 0;

		virtual void HandleInput ( ) = 0;
		virtual void Update ( ) = 0;
		virtual void Draw ( float dt) = 0;

		virtual void Pause ( ) { }
		virtual void Resume ( ) { }
		 
	};
}