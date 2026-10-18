// FUN_0068dc10 @ 0068dc10 body=[[0068dc10, 0068dc64]]


void FUN_0068dc10(int param_1,int param_2)

{
  int *piVar1;
  int in_EAX;
  int in_ECX;
  int unaff_ESI;
  
  *(int *)(*(int *)(*(int *)(param_1 + 0xbf0) + *(int *)(in_ECX + 4) * 0x10) + unaff_ESI * 4) =
       in_EAX;
  if (DAT_012588dc != 0) {
    FUN_00645de0(*(undefined4 *)(*(int *)(DAT_012588dc + 0x20d8) + param_2 * 4),
                 *(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_EAX + 0x4c));
    piVar1 = (int *)(*(int *)(*(int *)(DAT_0125870c + 0x2a88) + unaff_ESI * 4) + 0x70);
    *piVar1 = *piVar1 + 1;
  }
  return;
}

