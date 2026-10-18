// FUN_0043a910 @ 0043a910 body=[[0043a910, 0043a953]]


void FUN_0043a910(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  undefined4 *puVar2;
  int unaff_EDI;
  
  if (param_1 != param_2) {
    puVar1 = *(undefined4 **)(unaff_EDI + 4);
    puVar2 = param_1;
    for (; param_2 != puVar1; param_2 = param_2 + 2) {
      *puVar2 = *param_2;
      puVar2[1] = param_2[1];
      puVar2 = puVar2 + 2;
    }
    *(undefined4 **)(unaff_EDI + 4) = puVar2;
  }
  *in_EAX = param_1;
  return;
}

