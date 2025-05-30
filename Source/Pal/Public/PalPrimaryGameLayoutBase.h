#pragma once
#include "CoreMinimal.h"
#include "PrimaryGameLayout.h"
#include "UObject/NoExportTypes.h"
#include "EPalFadeWidgetLayerType.h"
#include "PalUICommonItemInfoDisplayData.h"
#include "PalUICommonRewardDisplayData.h"
#include "PalUICommonWarningDisplayData.h"
#include "PalPrimaryGameLayoutBase.generated.h"

class UPalHUDDispatchParameter_FadeWidget;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalPrimaryGameLayoutBase : public UPrimaryGameLayout {
    GENERATED_BODY()
public:
    UPalPrimaryGameLayoutBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowLiftIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowFocusCursor(UWidget* TargetWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowCommonWarning(const FPalUICommonWarningDisplayData& WarningDisplayData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowCommonReward(const FPalUICommonRewardDisplayData& RewardDisplayData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowCommonItemInfo(const FPalUICommonItemInfoDisplayData& DisplayData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupLiftIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideLiftIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideFocusCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideCommonWarning(const FGuid PreserveID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideCommonReward();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideCommonItemInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOut(EPalFadeWidgetLayerType LayerType, UPalHUDDispatchParameter_FadeWidget* FadeParameter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeIn(EPalFadeWidgetLayerType LayerType);
    
};

