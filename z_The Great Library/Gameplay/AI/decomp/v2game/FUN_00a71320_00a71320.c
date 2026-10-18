// FUN_00a71320 @ 00a71320 body=[[00a71320, 00a7134c] [00a71350, 00a713b9]]


/* WARNING: Removing unreachable block (ram,0x00a71367) */

int * FUN_00a71320(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  int *in_EAX;
  uint uVar5;
  int iVar6;
  
  *param_1 = *in_EAX;
  param_1[1] = (int)in_EAX;
  cVar4 = FUN_0043a860();
  if (cVar4 != '\0') {
    uVar1 = *(uint *)(param_2 + 0x10);
    do {
      iVar2 = *param_1;
      uVar3 = *(uint *)(iVar2 + 0x10);
      uVar5 = uVar3;
      if (uVar1 <= uVar3) {
        uVar5 = uVar1;
      }
      iVar6 = FUN_00414bd0(uVar5);
      if (((iVar6 == 0) && (uVar1 <= uVar3)) && (uVar3 == uVar1)) {
        return param_1;
      }
      *param_1 = iVar2 + 0x48;
      cVar4 = FUN_0043a860();
    } while (cVar4 != '\0');
  }
  return param_1;
}

