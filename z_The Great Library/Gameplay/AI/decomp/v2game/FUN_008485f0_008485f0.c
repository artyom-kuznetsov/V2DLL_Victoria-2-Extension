// FUN_008485f0 @ 008485f0  (requested 008485F0, first bytes: 55 8B EC 83 EC 08 8B 10)


undefined4 * FUN_008485f0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int in_EAX;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined8 uVar5;
  
  puVar2 = param_1;
  iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 4) * 4);
  FUN_0092f630(*(undefined4 *)(*(int *)(iVar3 + 0xbe8) + *(int *)(in_ECX + 4) * 4),&param_1,in_EAX,
               in_ECX);
  iVar1 = *(int *)(*(int *)(iVar3 + 0xbcc) + 0x78);
  iVar3 = __alldiv((longlong)*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x5c) *
                   (longlong)(*(int *)(*(int *)(iVar3 + 0xa60) + 0x308) + 1000),1000,0);
  iVar3 = __alldiv((longlong)iVar3 * (longlong)(iVar1 + 1000),1000,0);
  uVar5 = __allmul(iVar3,iVar3 >> 0x1f,3000,0);
  iVar3 = __alldiv(uVar5,1000,0);
  uVar4 = __alldiv((longlong)iVar3 * (longlong)(int)param_1,1000,0);
  *puVar2 = uVar4;
  return puVar2;
}

