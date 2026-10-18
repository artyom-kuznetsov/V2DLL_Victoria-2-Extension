// FUN_00950020 @ 00950020 body=[[00950020, 0095004c]]


void FUN_00950020(void)

{
  int in_EAX;
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  
  uVar1 = __alldiv((longlong)*(int *)(*(int *)(DAT_012586dc + 0x30) + 0x2dc) *
                   (longlong)*(int *)(*(int *)(in_EAX + 0xc) + 0x100),1000,0);
  *unaff_ESI = uVar1;
  return;
}

