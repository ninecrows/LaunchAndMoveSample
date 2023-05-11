
// LaunchAndMoveView.cpp : implementation of the CLaunchAndMoveView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "LaunchAndMove.h"
#endif

#include "LaunchAndMoveDoc.h"
#include "LaunchAndMoveView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CLaunchAndMoveView

IMPLEMENT_DYNCREATE(CLaunchAndMoveView, CView)

BEGIN_MESSAGE_MAP(CLaunchAndMoveView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CLaunchAndMoveView construction/destruction

CLaunchAndMoveView::CLaunchAndMoveView() noexcept
{
	// TODO: add construction code here

}

CLaunchAndMoveView::~CLaunchAndMoveView()
{
}

BOOL CLaunchAndMoveView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CLaunchAndMoveView drawing

void CLaunchAndMoveView::OnDraw(CDC* /*pDC*/)
{
	CLaunchAndMoveDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CLaunchAndMoveView printing

BOOL CLaunchAndMoveView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CLaunchAndMoveView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CLaunchAndMoveView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CLaunchAndMoveView diagnostics

#ifdef _DEBUG
void CLaunchAndMoveView::AssertValid() const
{
	CView::AssertValid();
}

void CLaunchAndMoveView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CLaunchAndMoveDoc* CLaunchAndMoveView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CLaunchAndMoveDoc)));
	return (CLaunchAndMoveDoc*)m_pDocument;
}
#endif //_DEBUG


// CLaunchAndMoveView message handlers
