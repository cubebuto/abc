#ifndef __BaseBrick__
#define __BaseBrick__
#include "GameObject.h"

class BaseBrick : public GameObject
{
private :
	LPDIRECT3DDEVICE9  m_d3ddv;
public:
	BaseBrick();
	BaseBrick(ObjectID m_ObjectID, Direction m_Direction, D3DXVECTOR3 m_Position, LPDIRECT3DDEVICE9 m_d3ddv);
	~BaseBrick();
	void Init();
	void Release();

	void Update();
	void UpdateAnimation();
	void Render(LPD3DXSPRITE m_spriteHandler);
	void UpdateCollision(GameObject *checkObject);

};
#endif

