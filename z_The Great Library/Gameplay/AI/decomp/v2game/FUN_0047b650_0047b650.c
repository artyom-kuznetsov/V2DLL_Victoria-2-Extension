// FUN_0047b650 @ 0047b650 body=[[0047b650, 0047b68e]]


void FUN_0047b650(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *unaff_ESI;
  
  if (param_2 != param_3) {
    uVar1 = FUN_006a2070(param_2);
    *(undefined4 *)(param_1 + 4) = uVar1;
    *unaff_ESI = param_2;
    return;
  }
  *unaff_ESI = param_2;
  return;
}

