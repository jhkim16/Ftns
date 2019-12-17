
// Ftn3View.cpp: CMy20191119classidlenewView 클래스의 구현
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "Ftn3.h"
#endif

#include "Ftn3Doc.h"
#include "Ftn3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy20191119classidlenewView

IMPLEMENT_DYNCREATE(CMy20191119classidlenewView, CView)

BEGIN_MESSAGE_MAP(CMy20191119classidlenewView, CView)
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

// CMy20191119classidlenewView 생성/소멸

CMy20191119classidlenewView::CMy20191119classidlenewView() noexcept
{
	srand(time(NULL));

}

CMy20191119classidlenewView::~CMy20191119classidlenewView()
{
}

BOOL CMy20191119classidlenewView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CMy20191119classidlenewView 그리기

void CMy20191119classidlenewView::OnDraw(CDC* /*pDC*/)
{
	CMy20191119classidlenewDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
}


// CMy20191119classidlenewView 인쇄

BOOL CMy20191119classidlenewView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CMy20191119classidlenewView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CMy20191119classidlenewView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}


// CMy20191119classidlenewView 진단

#ifdef _DEBUG
void CMy20191119classidlenewView::AssertValid() const
{
	CView::AssertValid();
}

void CMy20191119classidlenewView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy20191119classidlenewDoc* CMy20191119classidlenewView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy20191119classidlenewDoc)));
	return (CMy20191119classidlenewDoc*)m_pDocument;
}
#endif //_DEBUG


// CMy20191119classidlenewView 메시지 처리기


void CMy20191119classidlenewView::OnDrawRect()
{
	CClientDC dc(this);
	RECT r;
	GetClientRect(&r);
	int p1, p2, p3;
	p1 = rand() % r.right;
	p2 = rand() % r.bottom;
	p3 = rand() % 50;
	dc.Ellipse(p1 - p3, p2 - p3, p1 + p3 - p2, p2 + p2 - p3);
}


void CMy20191119classidlenewView::OnMouseMove(UINT nFlags, CPoint point)
{
	if (nFlags == MK_LBUTTON) {
		OnDrawRect();
	}

	CView::OnMouseMove(nFlags, point);
}
