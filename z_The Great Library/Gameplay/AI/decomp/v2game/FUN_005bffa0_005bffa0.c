// FUN_005bffa0 @ 005bffa0 body=[[005bffa0, 005c010e]]


int * FUN_005bffa0(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  undefined8 uVar6;
  
  iVar5 = in_ECX[0x19];
  *param_1 = *(int *)(in_ECX[0xe] + 0xb4);
  iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + iVar5 * 4);
  cVar3 = (**(code **)(*in_ECX + 0x24))();
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*in_ECX + 0x28))();
    if (cVar3 == '\0') goto LAB_005c001a;
    iVar4 = *(int *)(*(int *)(iVar5 + 0xa60) + 0x70);
  }
  else {
    iVar4 = *(int *)(*(int *)(iVar5 + 0xa60) + 0x68);
  }
  iVar4 = __alldiv((longlong)*param_1 * (longlong)(iVar4 + 1000),1000,0);
  *param_1 = iVar4;
LAB_005c001a:
  if (in_ECX[0x1d] != 0) {
    iVar4 = __alldiv((longlong)*param_1 *
                     (longlong)
                     (*(int *)(*(int *)(*(int *)(in_ECX[0x1d] + 0xd8) + 0x48) + 0x20) + 1000),1000,0
                    );
    *param_1 = iVar4;
  }
  cVar3 = (**(code **)(*in_ECX + 0x28))();
  uVar1 = *(undefined4 *)(iVar5 + 0x1448 + (uint)(cVar3 != '\0') * 8);
  uVar2 = *(undefined4 *)(iVar5 + 0x144c + (uint)(cVar3 != '\0') * 8);
  iVar5 = in_ECX[0x18];
  if ((((char)iVar5 != 'R') || ((char)((uint)iVar5 >> 8) != 'E')) ||
     ((char)((uint)iVar5 >> 0x10) != 'B')) {
    FUN_00401000(0x443ba000);
    iVar5 = FUN_00b31c00();
    uVar6 = __allmul(uVar1,uVar2,0x1f40000,0);
    iVar5 = __alldiv((longlong)(int)((uint)uVar6 >> 0x1e | (int)((ulonglong)uVar6 >> 0x20) << 2) *
                     (longlong)iVar5,1000,0);
    FUN_00401000(0x437a8000);
    iVar4 = FUN_00b31c00();
    iVar5 = __alldiv((longlong)*param_1 * (longlong)(iVar4 + iVar5),1000,0);
    *param_1 = iVar5;
  }
  return param_1;
}

