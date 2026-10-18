// FUN_00973cc0 @ 00973cc0 body=[[00973cc0, 00973ce4]]


void FUN_00973cc0(void)

{
  undefined4 *unaff_ESI;
  
  *unaff_ESI = CIssueOnExecute::vftable;
  if ((undefined4 *)unaff_ESI[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)unaff_ESI[2])(1);
  }
  if ((undefined4 *)unaff_ESI[3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)unaff_ESI[3])(1);
  }
  return;
}

