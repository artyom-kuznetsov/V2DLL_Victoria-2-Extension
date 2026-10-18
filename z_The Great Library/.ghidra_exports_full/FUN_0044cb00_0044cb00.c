// FUN_0044cb00 @ 0044cb00 body=[[0044cb00, 0044cb1c] [0044cb20, 0044cb4d]]


int FUN_0044cb00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      iVar2 = *(int *)(param_1 + 0x18);
      iVar1 = iVar5 * 8;
      uVar3 = __alldiv((longlong)*(int *)(iVar2 + iVar5 * 8) * (longlong)param_2,1000,0);
      iVar5 = iVar5 + 1;
      *(undefined4 *)(iVar2 + iVar1) = uVar3;
    } while (iVar5 < iVar4);
  }
  return param_1;
}

