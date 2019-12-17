
// Ftn3View.h: CMy20191119classidlenewView 클래스의 인터페이스
//

#pragma once


class CMy20191119classidlenewView : public CView
{
protected: // serialization에서만 만들어집니다.
	CMy20191119classidlenewView() noexcept;
	DECLARE_DYNCREATE(CMy20191119classidlenewView)

// 특성입니다.
public:
	CMy20191119classidlenewDoc* GetDocument() const;

// 작업입니다.
public:

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
	virtual ~CMy20191119classidlenewView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	DECLARE_MESSAGE_MAP()
public:
	void OnDrawRect();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // Ftn3View.cpp의 디버그 버전
inline CMy20191119classidlenewDoc* CMy20191119classidlenewView::GetDocument() const
   { return reinterpret_cast<CMy20191119classidlenewDoc*>(m_pDocument); }
#endif

