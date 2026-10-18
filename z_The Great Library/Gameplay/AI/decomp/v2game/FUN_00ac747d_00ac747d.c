// composeDeclaration @ 00ac747d body=[[00ac747d, 00ac8136]]


/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::composeDeclaration(class DName const &)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::composeDeclaration(DName *param_1)

{
  uint uVar1;
  uint uVar2;
  DName *pDVar3;
  DName *pDVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  bool bVar9;
  DName *in_stack_00000008;
  char *pcVar10;
  DName local_5c [8];
  DName local_54 [8];
  int local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  undefined4 local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_20 = local_20 & 0xffff0000;
  local_24 = 0;
  uVar1 = getTypeEncoding();
  if ((*(int *)in_stack_00000008 == 0) ||
     (local_18 = 1, (*(uint *)(in_stack_00000008 + 4) & 0x200) == 0)) {
    local_18 = 0;
  }
  if (uVar1 == 0xffff) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffff00ff;
    param_1[4] = (DName)0x2;
    *(undefined4 *)param_1 = 0;
    return param_1;
  }
  if (uVar1 == 0xfffe) {
    operator+((DNameStatus)param_1,(DName *)0x1);
    return param_1;
  }
  if (uVar1 == 0xfffd) {
    *(undefined4 *)param_1 = *(undefined4 *)in_stack_00000008;
    local_20 = *(uint *)(in_stack_00000008 + 4);
    goto LAB_00ac812f;
  }
  local_8 = uVar1 & 0x8000;
  if (local_8 == 0) {
LAB_00ac7b6f:
    DName::operator+=((DName *)&local_24,in_stack_00000008);
    if (local_8 == 0) {
      if (((uVar1 & 0x7c00) == 0x6800) || ((uVar1 & 0x7c00) == 0x7000)) {
        getVfTableType(param_1);
        return param_1;
      }
      if ((uVar1 & 0x7c00) == 0x6000) {
        getDimension(SUB41(&local_3c,0));
        local_4c = local_24;
        local_48 = local_20;
        DName::operator+=((DName *)&local_4c,'{');
        local_44 = local_4c;
        local_40 = local_48;
        DName::operator+=((DName *)&local_44,(DName *)&local_3c);
        DName::operator+((DName *)&local_44,(char *)param_1);
        return param_1;
      }
      if ((uVar1 & 0x7c00) == 0x7c00) {
        getVdispMapType(param_1);
        return param_1;
      }
      uVar2 = uVar1 & 0x6000;
    }
    else {
      uVar2 = (uVar1 & 0x1800) - 0x800;
    }
    if (uVar2 == 0) {
      uVar2 = uVar1 & 0x400;
    }
    else {
      uVar2 = uVar1 & 0x1000;
    }
    if ((uVar2 == 0) || ((uVar1 & 0x1b00) != 0x1000 || local_8 == 0)) {
      if (local_8 == 0) {
        uVar2 = uVar1 & 0x6000;
      }
      else {
        uVar2 = (uVar1 & 0x1800) - 0x800;
      }
      if (uVar2 == 0) {
        uVar2 = uVar1 & 0x400;
      }
      else {
        uVar2 = uVar1 & 0x1000;
      }
      if ((uVar2 != 0) && ((uVar1 & 0x1b00) == 0x1100 && local_8 != 0)) {
        pcVar10 = "`template static data member constructor helper\'";
        goto LAB_00ac7d34;
      }
      if (local_8 == 0) {
        uVar2 = uVar1 & 0x6000;
      }
      else {
        uVar2 = (uVar1 & 0x1800) - 0x800;
      }
      if (uVar2 == 0) {
        uVar2 = uVar1 & 0x400;
      }
      else {
        uVar2 = uVar1 & 0x1000;
      }
      if ((uVar2 != 0) && ((uVar1 & 0x1b00) == 0x1200 && local_8 != 0)) {
        pcVar10 = "`template static data member destructor helper\'";
        goto LAB_00ac7d34;
      }
      if (local_8 == 0) {
        if ((uVar1 & 0x7c00) == 0x7800) goto LAB_00ac8127;
        goto LAB_00ac7d53;
      }
LAB_00ac7d59:
      uVar2 = (uVar1 & 0x1800) - 0x800;
    }
    else {
      pcVar10 = "`local static destructor helper\'";
LAB_00ac7d34:
      DName::operator+=((DName *)&local_24,pcVar10);
LAB_00ac7d53:
      if (local_8 != 0) goto LAB_00ac7d59;
      uVar2 = uVar1 & 0x6000;
    }
    if (uVar2 == 0) {
      uVar2 = uVar1 & 0x400;
    }
    else {
      uVar2 = uVar1 & 0x1000;
    }
    if ((uVar2 == 0) ||
       (((uVar1 & 0x1b00) != 0x1100 || local_8 == 0 && ((uVar1 & 0x1b00) != 0x1200 || local_8 == 0))
       )) {
      piVar6 = (int *)getExternalDataType(local_5c);
      local_24 = *piVar6;
      local_20 = piVar6[1];
    }
    else {
      pDVar4 = (DName *)&local_4c;
      pDVar3 = (DName *)DName::DName(local_5c," ");
      DName::operator+(pDVar3,pDVar4);
      local_24 = local_4c;
      local_20 = local_48;
    }
LAB_00ac7dff:
    if (local_8 == 0) {
      uVar2 = uVar1 & 0x6000;
    }
    else {
      uVar2 = (uVar1 & 0x1800) - 0x800;
    }
    if (uVar2 == 0) {
      if ((~(DAT_00f20988 >> 9) & 1) != 0) {
        if (local_8 == 0) {
          uVar2 = uVar1 & 0x6000;
        }
        else {
          uVar2 = (uVar1 & 0x1800) - 0x800;
        }
        if ((uVar2 == 0) && (local_8 == 0 || (uVar1 & 0x700) == 0x200)) {
          pDVar4 = (DName *)&local_4c;
          pDVar3 = (DName *)DName::DName(local_5c,"static ");
          DName::operator+(pDVar3,pDVar4);
          local_24 = local_4c;
          local_20 = local_48;
        }
        if (local_8 == 0) {
LAB_00ac7ebe:
          uVar2 = uVar1 & 0x6000;
LAB_00ac7ec5:
          if (uVar2 == 0) {
            uVar2 = uVar1 & 0x400;
          }
          else {
            uVar2 = uVar1 & 0x1000;
          }
          if (uVar2 == 0) goto LAB_00ac7f84;
          if (local_8 == 0) {
            uVar2 = uVar1 & 0x6000;
          }
          else {
            uVar2 = (uVar1 & 0x1800) - 0x800;
          }
          if ((uVar2 != 0) || ((uVar1 & 0x700) != 0x500)) {
            if (local_8 == 0) {
              uVar2 = uVar1 & 0x6000;
            }
            else {
              uVar2 = (uVar1 & 0x1800) - 0x800;
            }
            if ((uVar2 != 0) || ((uVar1 & 0x700) != 0x600)) {
              if (local_8 == 0) {
                uVar2 = uVar1 & 0x6000;
              }
              else {
                uVar2 = (uVar1 & 0x1800) - 0x800;
              }
              if ((uVar2 != 0) || ((uVar1 & 0x700) != 0x400)) goto LAB_00ac7f84;
            }
          }
        }
        else if ((uVar1 & 0x700) != 0x100) {
          if (local_8 == 0) goto LAB_00ac7ebe;
          uVar2 = (uVar1 & 0x1800) - 0x800;
          goto LAB_00ac7ec5;
        }
        pDVar4 = (DName *)&local_4c;
        pDVar3 = (DName *)DName::DName(local_5c,"virtual ");
        DName::operator+(pDVar3,pDVar4);
        local_24 = local_4c;
        local_20 = local_48;
      }
LAB_00ac7f84:
      if ((~(DAT_00f20988 >> 7) & 1) != 0) {
        if (local_8 == 0) {
          uVar2 = uVar1 & 0x6000;
        }
        else {
          uVar2 = (uVar1 & 0x1800) - 0x800;
        }
        if (uVar2 == 0) {
          if (local_8 == 0) {
            bVar9 = (uVar1 & 0x1800) == 0x800;
          }
          else {
            bVar9 = ((byte)uVar1 & 0xc0) == 0x40;
          }
          if (!bVar9) goto LAB_00ac7fe6;
          pcVar10 = "private: ";
LAB_00ac807d:
          pDVar3 = (DName *)&local_4c;
          pDVar4 = (DName *)DName::DName(local_5c,pcVar10);
          DName::operator+(pDVar4,pDVar3);
          local_24 = local_4c;
          local_20 = local_48;
        }
        else {
LAB_00ac7fe6:
          if (local_8 == 0) {
            uVar2 = uVar1 & 0x6000;
          }
          else {
            uVar2 = (uVar1 & 0x1800) - 0x800;
          }
          if (uVar2 == 0) {
            if (local_8 == 0) {
              bVar9 = (uVar1 & 0x1800) == 0x1000;
            }
            else {
              bVar9 = ((byte)uVar1 & 0xc0) == 0x80;
            }
            if (bVar9) {
              pcVar10 = "protected: ";
              goto LAB_00ac807d;
            }
          }
          if (local_8 == 0) {
            uVar2 = uVar1 & 0x6000;
          }
          else {
            uVar2 = (uVar1 & 0x1800) - 0x800;
          }
          if (uVar2 == 0) {
            if (local_8 == 0) {
              uVar2 = uVar1 & 0x1800;
            }
            else {
              uVar2 = uVar1 & 0xc0;
            }
            if (uVar2 == 0) {
              pcVar10 = "public: ";
              goto LAB_00ac807d;
            }
          }
        }
      }
    }
    if (local_8 == 0) {
      uVar2 = uVar1 & 0x6000;
    }
    else {
      uVar2 = (uVar1 & 0x1800) - 0x800;
    }
    if (uVar2 == 0) {
      uVar2 = uVar1 & 0x400;
    }
    else {
      uVar2 = uVar1 & 0x1000;
    }
    if ((uVar2 != 0) && ((DAT_00f20988 & 0x1000) == 0)) {
      pDVar4 = (DName *)&local_4c;
      pDVar3 = (DName *)DName::DName(local_5c,"[thunk]:");
      DName::operator+(pDVar3,pDVar4);
      local_24 = local_4c;
      local_20 = local_48;
    }
    if ((uVar1 & 0x10000) != 0) {
      pDVar4 = (DName *)&local_4c;
      pDVar3 = (DName *)DName::DName(local_5c,"extern \"C\" ");
      DName::operator+(pDVar3,pDVar4);
      local_20 = local_48;
      local_24 = local_4c;
    }
  }
  else {
    local_10 = uVar1 & 0x1800;
    local_c = (uint)(local_10 == 0x800);
    if (local_c == 0) {
      uVar2 = uVar1 & 0x1000;
    }
    else {
      uVar2 = uVar1 & 0x400;
    }
    if ((uVar2 != 0) && ((uVar1 & 0x1b00) == 0x1000)) goto LAB_00ac7b6f;
    if (local_c == 0) {
      uVar2 = uVar1 & 0x1000;
    }
    else {
      uVar2 = uVar1 & 0x400;
    }
    if ((uVar2 != 0) && (((uVar1 & 0x1b00) == 0x1100 || ((uVar1 & 0x1b00) == 0x1200))))
    goto LAB_00ac7b6f;
    if ((uVar1 & 0x4000) != 0) {
      if (((~(DAT_00f20988 >> 1) & 1) == 0) || ((~(DAT_00f20988 >> 3) & 1) == 0)) {
        pDVar4 = (DName *)getBasedType();
        DName::operator|=((DName *)&local_24,pDVar4);
      }
      else {
        getBasedType();
        pDVar4 = (DName *)&local_4c;
        pDVar3 = (DName *)DName::DName((DName *)&local_3c,' ');
        DName::operator+(pDVar3,pDVar4);
        local_24 = local_4c;
        local_20 = local_48;
      }
    }
    if (local_c == 0) {
      uVar2 = uVar1 & 0x1000;
    }
    else {
      uVar2 = uVar1 & 0x400;
    }
    if ((uVar2 != 0) && (local_10 == 0x1800)) {
      getDimension(SUB41(&local_4c,0));
      pDVar4 = (DName *)&local_44;
      pDVar3 = (DName *)DName::operator+(in_stack_00000008,(char)&local_3c);
      pDVar4 = (DName *)DName::operator+(pDVar3,pDVar4);
      DName::operator+=((DName *)&local_24,pDVar4);
      getVCallThunkType();
      if ((DAT_00f20988 & 0x1000) == 0) {
        pDVar4 = (DName *)&local_44;
        pDVar3 = (DName *)DName::DName((DName *)&local_3c,',');
        DName::operator+(pDVar3,pDVar4);
        local_4c = local_44;
        local_48 = local_40;
        DName::operator+=((DName *)&local_4c,"}\' ");
        DName::operator+=((DName *)&local_24,(DName *)&local_4c);
      }
      DName::operator+=((DName *)&local_24,"}\'");
      getCallingConvention();
      if ((((~(DAT_00f20988 >> 1) & 1) != 0) && ((~(DAT_00f20988 >> 4) & 1) != 0)) &&
         ((DAT_00f20988 & 0x1000) == 0)) {
        pDVar4 = (DName *)&local_44;
        pDVar3 = (DName *)DName::DName((DName *)&local_3c,' ');
        DName::operator+(pDVar3,pDVar4);
        local_4c = local_44;
        local_48 = local_40;
        DName::operator+=((DName *)&local_4c,' ');
        local_44 = local_4c;
        local_40 = local_48;
        DName::operator+=((DName *)&local_44,(DName *)&local_24);
        local_24 = local_44;
        local_20 = local_40;
      }
      goto LAB_00ac7dff;
    }
    local_40 = local_40 & 0xffff0000;
    local_48 = local_48 & 0xffff0000;
    local_10 = local_10 & 0xffff0000;
    local_28 = local_28 & 0xffff0000;
    local_30 = local_30 & 0xffff0000;
    local_44 = 0;
    local_4c = 0;
    local_14 = 0;
    local_2c = 0;
    local_34 = 0;
    if (local_c == 0) {
      uVar2 = uVar1 & 0x1000;
    }
    else {
      uVar2 = uVar1 & 0x400;
    }
    if (uVar2 != 0) {
      if (local_c != 0) {
        if ((uVar1 & 0x700) == 0x600) {
          getDimension(SUB41(&local_3c,0));
          local_44 = local_3c;
          local_40 = local_38;
          getDimension(SUB41(&local_3c,0));
          local_4c = local_3c;
          local_48 = local_38;
          getDimension(SUB41(&local_3c,0));
        }
        else {
          if ((local_c == 0) || ((uVar1 & 0x700) != 0x500)) goto LAB_00ac77ea;
          getDimension(SUB41(&local_3c,0));
        }
        local_14 = local_3c;
        local_10 = local_38;
      }
LAB_00ac77ea:
      getDimension(SUB41(&local_3c,0));
      local_2c = local_3c;
      local_28 = local_38;
    }
    if ((local_c != 0) && ((local_c == 0 || ((uVar1 & 0x700) != 0x200)))) {
      if (((byte)DAT_00f20988 & 0x60) == 0x60) {
        pDVar4 = (DName *)getThisType();
        DName::operator|=((DName *)&local_34,pDVar4);
      }
      else {
        puVar5 = (undefined4 *)getThisType();
        local_34 = *puVar5;
        local_30 = puVar5[1];
      }
    }
    if (((~(DAT_00f20988 >> 1) & 1) == 0) || ((~(DAT_00f20988 >> 4) & 1) == 0)) {
      pDVar4 = (DName *)getCallingConvention();
      DName::operator|=((DName *)&local_24,pDVar4);
    }
    else {
      pDVar4 = (DName *)&local_3c;
      pDVar3 = (DName *)getCallingConvention();
      piVar6 = (int *)DName::operator+(pDVar3,pDVar4);
      local_24 = *piVar6;
      local_20 = piVar6[1];
    }
    if (*(int *)in_stack_00000008 != 0) {
      if ((local_24 == 0) || ((DAT_00f20988 & 0x1000) != 0)) {
        local_24 = *(int *)in_stack_00000008;
        local_20 = *(uint *)(in_stack_00000008 + 4);
      }
      else {
        pDVar4 = (DName *)&local_3c;
        pDVar3 = (DName *)DName::DName(local_54,' ');
        DName::operator+(pDVar3,pDVar4);
        DName::operator+=((DName *)&local_24,(DName *)&local_3c);
      }
    }
    local_38 = local_38 & 0xffff0000;
    piVar6 = (int *)0x0;
    local_3c = 0;
    if (local_18 == 0) {
      piVar7 = _HeapManager::getMemory((_HeapManager *)&DAT_00f20958,8,0);
      piVar6 = (int *)0x0;
      if (piVar7 != (int *)0x0) {
        *piVar7 = 0;
        *(undefined1 *)(piVar7 + 1) = 0;
        piVar7[1] = piVar7[1] & 0xffff00ff;
        piVar6 = piVar7;
      }
      piVar7 = (int *)getReturnType(local_5c);
      local_3c = *piVar7;
      local_38 = piVar7[1];
LAB_00ac7976:
      uVar2 = local_c;
      if (local_c == 0) {
        uVar8 = uVar1 & 0x1000;
      }
      else {
        uVar8 = uVar1 & 0x400;
      }
      if (uVar8 != 0) {
        if (local_c == 0) {
LAB_00ac7a75:
          DName::operator+=((DName *)&local_24,"`adjustor{");
        }
        else {
          if ((uVar1 & 0x700) == 0x600) {
            pDVar4 = (DName *)&local_1c;
            pDVar3 = (DName *)DName::DName(local_5c,"`vtordispex{");
            DName::operator+(pDVar3,pDVar4);
            local_44 = local_1c;
            local_40 = local_18;
            DName::operator+=((DName *)&local_44,',');
            local_1c = local_44;
            local_18 = local_40;
            DName::operator+=((DName *)&local_1c,(DName *)&local_4c);
            local_4c = local_1c;
            local_48 = local_18;
            DName::operator+=((DName *)&local_4c,',');
            local_44 = local_4c;
            local_40 = local_48;
            DName::operator+=((DName *)&local_44,(DName *)&local_14);
          }
          else {
            if ((local_c == 0) || ((uVar1 & 0x700) != 0x500)) goto LAB_00ac7a75;
            pDVar4 = (DName *)&local_44;
            pDVar3 = (DName *)DName::DName(local_5c,"`vtordisp{");
            DName::operator+(pDVar3,pDVar4);
          }
          local_4c = local_44;
          local_48 = local_40;
          DName::operator+=((DName *)&local_4c,',');
          DName::operator+=((DName *)&local_24,(DName *)&local_4c);
        }
        local_4c = local_2c;
        local_48 = local_28;
        DName::operator+=((DName *)&local_4c,"}\' ");
        DName::operator+=((DName *)&local_24,(DName *)&local_4c);
      }
      getArgumentTypes();
      pDVar4 = (DName *)&local_44;
      pDVar3 = (DName *)DName::DName(local_54,'(');
      DName::operator+(pDVar3,pDVar4);
      local_4c = local_44;
      local_48 = local_40;
      DName::operator+=((DName *)&local_4c,')');
      DName::operator+=((DName *)&local_24,(DName *)&local_4c);
      if ((uVar2 != 0) && ((uVar1 & 0x700) != 0x200)) {
        DName::operator+=((DName *)&local_24,(DName *)&local_34);
      }
      if ((~(DAT_00f20988 >> 8) & 1) == 0) {
        pDVar4 = (DName *)getThrowTypes();
        DName::operator|=((DName *)&local_24,pDVar4);
      }
      else {
        pDVar4 = (DName *)getThrowTypes();
        DName::operator+=((DName *)&local_24,pDVar4);
      }
      if (((~(DAT_00f20988 >> 2) & 1) != 0) && (piVar6 != (int *)0x0)) {
        *piVar6 = local_24;
        piVar6[1] = local_20;
        local_24 = local_3c;
        local_20 = local_38;
      }
      goto LAB_00ac7dff;
    }
    getReturnType(local_54);
    pDVar4 = (DName *)&local_1c;
    pDVar3 = (DName *)DName::DName(local_5c," ");
    DName::operator+(pDVar3,pDVar4);
    DName::operator+=((DName *)&local_24,(DName *)&local_1c);
    if ((DAT_00f20988 & 0x1000) == 0) goto LAB_00ac7976;
  }
LAB_00ac8127:
  *(int *)param_1 = local_24;
LAB_00ac812f:
  *(uint *)(param_1 + 4) = local_20;
  return param_1;
}

