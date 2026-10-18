// FindVITargetTypeInstance @ 00ab0b65 body=[[00ab0b65, 00ab0cba]]


/* Library Function - Single Match
    struct _s_RTTIBaseClassDescriptor const * __cdecl FindVITargetTypeInstance(void *,struct
   _s_RTTICompleteObjectLocator const *,struct TypeDescriptor *,int,struct TypeDescriptor *)
   
   Library: Visual Studio 2010 Release */

_s_RTTIBaseClassDescriptor * __cdecl
FindVITargetTypeInstance
          (void *param_1,_s_RTTICompleteObjectLocator *param_2,TypeDescriptor *param_3,int param_4,
          TypeDescriptor *param_5)

{
  int iVar1;
  uint uVar2;
  _s_RTTIBaseClassDescriptor *p_Var3;
  uint uVar4;
  bool bVar5;
  byte bVar6;
  int in_EAX;
  int iVar7;
  int iVar8;
  TypeDescriptor *pTVar9;
  PMD *unaff_EDI;
  _s_RTTIBaseClassDescriptor *p_Var10;
  bool bVar11;
  _s_RTTIBaseClassDescriptor *local_24;
  _s_RTTIBaseClassDescriptor *local_20;
  int local_1c;
  _s_RTTIBaseClassDescriptor *local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  iVar1 = *(int *)(*(int *)(in_EAX + 0x10) + 0xc);
  local_10 = 0xffffffff;
  local_1c = -1;
  uVar2 = *(uint *)(*(int *)(in_EAX + 0x10) + 8);
  p_Var10 = (_s_RTTIBaseClassDescriptor *)0x0;
  local_18 = (_s_RTTIBaseClassDescriptor *)0x0;
  local_20 = (_s_RTTIBaseClassDescriptor *)0x0;
  local_24 = (_s_RTTIBaseClassDescriptor *)0x0;
  local_14 = 0;
  bVar5 = true;
  local_c = 0;
  if (uVar2 != 0) {
    do {
      p_Var3 = *(_s_RTTIBaseClassDescriptor **)(iVar1 + local_c * 4);
      if ((local_14 < local_c - local_10) &&
         ((*(int *)p_Var3 == param_4 ||
          (iVar7 = _strcmp((char *)(*(int *)p_Var3 + 8),(char *)(param_4 + 8)), iVar7 == 0)))) {
        if (((byte)p_Var3[0x14] & 3) == 0) {
          local_24 = p_Var3;
        }
        local_10 = local_c;
        local_14 = *(uint *)(p_Var3 + 4);
        p_Var10 = p_Var3;
      }
      iVar7 = local_1c;
      if (((*(_s_RTTICompleteObjectLocator **)p_Var3 == param_2) ||
          (iVar8 = _strcmp((char *)(*(_s_RTTICompleteObjectLocator **)p_Var3 + 8),
                           (char *)(param_2 + 8)), iVar8 == 0)) &&
         (pTVar9 = (TypeDescriptor *)PMDtoOffset(param_1,unaff_EDI), pTVar9 == param_3)) {
        if (local_14 < local_c - local_10) {
          if (((byte)p_Var3[0x14] & 5) == 0) {
            local_20 = p_Var3;
          }
        }
        else if (bVar5) {
          if (((byte)p_Var10[0x14] & 0x40) == 0) {
            if ((local_10 == 0) && (((byte)p_Var3[0x14] & 1) != 0)) {
              bVar5 = false;
            }
            bVar6 = 1;
          }
          else {
            uVar4 = *(uint *)(*(int *)(*(int *)(*(int *)(p_Var10 + 0x18) + 0xc) +
                                      (local_c - local_10) * 4) + 0x14);
            if ((uVar4 & 1) != 0) {
              bVar5 = false;
            }
            bVar6 = ~(byte)(uVar4 >> 2) & 1;
          }
          if (((bVar5) && (bVar6 != 0)) &&
             ((iVar7 = PMDtoOffset(param_1,unaff_EDI),
              bVar11 = local_18 != (_s_RTTIBaseClassDescriptor *)0x0, local_18 = p_Var10, bVar11 &&
              (local_1c != iVar7)))) {
            return (_s_RTTIBaseClassDescriptor *)0x0;
          }
        }
      }
      local_1c = iVar7;
      local_c = local_c + 1;
    } while (local_c < uVar2);
    if ((bVar5) && (local_18 != (_s_RTTIBaseClassDescriptor *)0x0)) {
      return local_18;
    }
    if ((local_20 != (_s_RTTIBaseClassDescriptor *)0x0) &&
       (local_24 != (_s_RTTIBaseClassDescriptor *)0x0)) {
      return local_24;
    }
  }
  return (_s_RTTIBaseClassDescriptor *)0x0;
}

