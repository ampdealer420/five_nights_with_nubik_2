using UnityEngine;

[CreateAssetMenu(fileName = "Day Data", menuName = "Game Data's/Day Data", order = 1)]
public class GameDayData : ScriptableObject
{
    public string NewspaperTagScreen;
    public float TimeForNewspaperShow;

    public float NubikSpeed;

    public float EnergyDoorDecreaser;
    public float EnergyCameraDecreaser;

    public float MinTimeToBrokeBattery;
    public float MaxTimeToBrokeBattery;

    public float MinTimeToBrokeDoor;
    public float MaxTimeToBrokeDoor;

    public float TimeToRepairEnergyBatteryText;
    public float TimeToRepairDoorButton;
}
