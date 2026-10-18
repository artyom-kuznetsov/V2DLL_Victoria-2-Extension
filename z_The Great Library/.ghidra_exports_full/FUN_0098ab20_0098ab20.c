// FUN_0098ab20 @ 0098ab20 body=[[0098ab20, 0098ab7c]]


/* WARNING: Removing unreachable block (ram,0x0098ab39) */

bool FUN_0098ab20(void)

{
  uint uVar1;
  uint uVar2;
  int in_EAX;
  uint uVar3;
  int in_EDX;
  
  uVar1 = *(uint *)(in_EAX + 0x10);
  uVar2 = *(uint *)(in_EDX + 0x10);
  uVar3 = uVar2;
  if (uVar1 <= uVar2) {
    uVar3 = uVar1;
  }
  uVar3 = FUN_00414bd0(uVar3);
  if (uVar3 == 0) {
    if (uVar2 < uVar1) {
      return true;
    }
    uVar3 = (uint)(uVar2 != uVar1);
  }
  return (int)uVar3 < 0;
}

