
// Ftn2View.h: CFtn2View 클래스의 인터페이스
//

#pragma once


class CFtn2View : public CView
{
protected: // serialization에서만 만들어집니다.
	CFtn2View() noexcept;
	DECLARE_DYNCREATE(CFtn2View)

// 특성입니다.
public:
	CFtn2Doc* GetDocument() const;

// 작업입니다.
public:
	CPoint pnt;
	COLORREF col;
	int size;
// 재정의입니다.
public:
	virtual void OnDraw(CDC* pDC);  // 이 뷰를 그리기 위해 재정의되었습니다.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 구현입니다.
public:
	virtual ~CFtn2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnMenuCol();
	afx_msg void OnSize1();
	afx_msg void OnSize16();
	virtual void OnInitialUpdate();
};

#ifndef _DEBUG  // Ftn2View.cpp의 디버그 버전
inline CFtn2Doc* CFtn2View::GetDocument() const
   { return reinterpret_cast<CFtn2Doc*>(m_pDocument); }
#endif

