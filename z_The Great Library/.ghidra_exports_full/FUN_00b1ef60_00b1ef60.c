// FID_conflict:~CProgressCtrl @ 00b1ef60 body=[[00b1ef60, 00b1efba]]


/* Library Function - Multiple Matches With Different Base Names
    public: virtual __thiscall CButton::~CButton(void)
    public: virtual __thiscall CComboBox::~CComboBox(void)
    public: virtual __thiscall CDateTimeCtrl::~CDateTimeCtrl(void)
    public: virtual __thiscall CDialogBar::~CDialogBar(void)
     19 names - too many to list
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void FID_conflict__CProgressCtrl(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b3a09b;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00de0a90;
  local_4 = 0;
  FUN_00b19ee0(uVar1);
  local_4 = 0xffffffff;
  FUN_00b1f390();
  ExceptionList = local_c;
  return;
}

