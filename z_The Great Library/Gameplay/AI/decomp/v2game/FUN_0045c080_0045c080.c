// FUN_0045c080 @ 0045c080 body=[[0045c080, 0045c09b] [0045c0a0, 0045c0f6]]


/* WARNING: Removing unreachable block (ram,0x0045c0b6) */

void FUN_0045c080(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int in_EAX;
  uint uVar3;
  int iVar4;
  
  if (in_EAX != param_1) {
    uVar1 = *(uint *)(param_2 + 0x10);
    do {
      uVar2 = *(uint *)(in_EAX + 0x10);
      uVar3 = uVar2;
      if (uVar1 <= uVar2) {
        uVar3 = uVar1;
      }
      iVar4 = FUN_00414bd0(uVar3);
    } while ((((iVar4 != 0) || (uVar2 < uVar1)) || (uVar2 != uVar1)) &&
            (in_EAX = in_EAX + 0x1c, in_EAX != param_1));
  }
  return;
}

