// FUN_004b3bd0 @ 004b3bd0 body=[[004b3bd0, 004b3c33]]


void FUN_004b3bd0(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  fpos<_Mbstatet> *this;
  int in_EAX;
  int iVar2;
  
  puVar1 = *(undefined4 **)(in_EAX + 0x10);
  do {
    if (puVar1 == (undefined4 *)0x0) {
      *param_1 = DAT_01259abc;
      return;
    }
    this = (fpos<_Mbstatet> *)*puVar1;
    puVar1 = (undefined4 *)puVar1[1];
    iVar2 = (**(code **)(*(int *)this + 0x18))();
  } while ((iVar2 != 0x295) ||
          (iVar2 = std::fpos<_Mbstatet>::state(this), *(int *)(iVar2 + 4) != *(int *)(param_2 + 4)))
  ;
  *param_1 = *(undefined4 *)(this + 8);
  return;
}

