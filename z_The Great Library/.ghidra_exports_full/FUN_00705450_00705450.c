// FUN_00705450 @ 00705450 body=[[00705450, 00705482]]


void FUN_00705450(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_EAX;
  int *piVar3;
  int *unaff_ESI;
  
  piVar3 = (int *)0x0;
  if (((int *)*unaff_ESI != (int *)0x0) &&
     (puVar1 = *(undefined4 **)*unaff_ESI, puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  iVar2 = unaff_ESI[2];
  *in_EAX = 0;
  in_EAX[1] = 0;
  in_EAX[2] = iVar2 + -1;
  if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
    *in_EAX = *(undefined4 *)*piVar3;
  }
  return;
}

