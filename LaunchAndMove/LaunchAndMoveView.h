
// LaunchAndMoveView.h : interface of the CLaunchAndMoveView class
//

#pragma once


class CLaunchAndMoveView : public CView
{
protected: // create from serialization only
	CLaunchAndMoveView() noexcept;
	DECLARE_DYNCREATE(CLaunchAndMoveView)

// Attributes
public:
	CLaunchAndMoveDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CLaunchAndMoveView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in LaunchAndMoveView.cpp
inline CLaunchAndMoveDoc* CLaunchAndMoveView::GetDocument() const
   { return reinterpret_cast<CLaunchAndMoveDoc*>(m_pDocument); }
#endif

