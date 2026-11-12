// GENERATED FILE -- DO NOT EDIT BY HAND.
// Produced by codegen/generate.py from codegen/metadata/dcimgui.json.
// Regenerate with the `regen-bindings` CMake target; see CONTRIBUTING.md.

#include "sol_ImGui.h"

namespace sol_ImGui {
namespace {

void AlignTextToFramePadding() {
  ImGui::AlignTextToFramePadding();
}

void BeginDisabled(sol::optional<bool> disabled) {
  bool disabled_v = disabled.value_or(true);
  ImGui::BeginDisabled(disabled_v);
}

void BeginGroup() {
  ImGui::BeginGroup();
}

bool BeginMainMenuBar() {
  auto ret = ImGui::BeginMainMenuBar();
  return ret;
}

bool BeginPopup(const std::string& str_id, sol::optional<ImGuiWindowFlags> flags) {
  ImGuiWindowFlags flags_v = static_cast<ImGuiWindowFlags>(flags.value_or(0));
  auto ret = ImGui::BeginPopup(str_id.c_str(), flags_v);
  return ret;
}

bool BeginPopupContextWindow(sol::optional<std::string> str_id, sol::optional<ImGuiPopupFlags> popup_flags) {
  std::string str_id_v = str_id.value_or(std::string());
  ImGuiPopupFlags popup_flags_v = static_cast<ImGuiPopupFlags>(popup_flags.value_or(0));
  auto ret = ImGui::BeginPopupContextWindow(str_id_v.c_str(), popup_flags_v);
  return ret;
}

bool BeginTooltip() {
  auto ret = ImGui::BeginTooltip();
  return ret;
}

float CalcItemWidth() {
  auto ret = ImGui::CalcItemWidth();
  return ret;
}

void CloseCurrentPopup() {
  ImGui::CloseCurrentPopup();
}

std::tuple<float, float, float> ColorConvertHSVtoRGB(float h, float s, float v, float out_r, float out_g, float out_b) {
  float out_r_v = out_r;
  float out_g_v = out_g;
  float out_b_v = out_b;
  ImGui::ColorConvertHSVtoRGB(h, s, v, out_r_v, out_g_v, out_b_v);
  return std::make_tuple(out_r_v, out_g_v, out_b_v);
}

void Columns(sol::optional<int> count, sol::optional<std::string> id, sol::optional<bool> borders) {
  int count_v = count.value_or(1);
  std::string id_v = id.value_or(std::string());
  bool borders_v = borders.value_or(true);
  ImGui::Columns(count_v, id_v.c_str(), borders_v);
}

void DebugStartItemPicker() {
  ImGui::DebugStartItemPicker();
}

std::tuple<float, float, bool> DragFloatRange2(const std::string& label, float v_current_min, float v_current_max, sol::optional<float> v_speed, sol::optional<float> v_min, sol::optional<float> v_max, sol::optional<std::string> format, sol::optional<std::string> format_max, sol::optional<ImGuiSliderFlags> flags) {
  float v_current_min_v = v_current_min;
  float v_current_max_v = v_current_max;
  float v_speed_v = v_speed.value_or(1.0f);
  float v_min_v = v_min.value_or(0.0f);
  float v_max_v = v_max.value_or(0.0f);
  std::string format_v = format.value_or(std::string("%.3f"));
  std::string format_max_v = format_max.value_or(std::string());
  ImGuiSliderFlags flags_v = static_cast<ImGuiSliderFlags>(flags.value_or(0));
  auto ret = ImGui::DragFloatRange2(label.c_str(), &v_current_min_v, &v_current_max_v, v_speed_v, v_min_v, v_max_v, format_v.c_str(), format_max_v.c_str(), flags_v);
  return std::make_tuple(v_current_min_v, v_current_max_v, ret);
}

void Dummy(const ImVec2& size) {
  ImGui::Dummy(size);
}

void EndCombo() {
  ImGui::EndCombo();
}

void EndDragDropTarget() {
  ImGui::EndDragDropTarget();
}

void EndListBox() {
  ImGui::EndListBox();
}

void EndMenuBar() {
  ImGui::EndMenuBar();
}

void EndTabItem() {
  ImGui::EndTabItem();
}

std::string GetClipboardText() {
  const char* ret = ImGui::GetClipboardText();
  return std::string(ret ? ret : "");
}

float GetColumnWidth(sol::optional<int> column_index) {
  int column_index_v = column_index.value_or(-1);
  auto ret = ImGui::GetColumnWidth(column_index_v);
  return ret;
}

ImVec2 GetContentRegionMax() {
  auto ret = ImGui::GetContentRegionMax();
  return ret;
}

float GetCursorPosY() {
  auto ret = ImGui::GetCursorPosY();
  return ret;
}

float GetFontSize() {
  auto ret = ImGui::GetFontSize();
  return ret;
}

float GetFrameHeight() {
  auto ret = ImGui::GetFrameHeight();
  return ret;
}

ImGuiItemFlags GetItemFlags() {
  auto ret = ImGui::GetItemFlags();
  return ret;
}

ImVec2 GetItemRectMin() {
  auto ret = ImGui::GetItemRectMin();
  return ret;
}

int GetKeyPressedAmount(ImGuiKey key, float repeat_delay, float rate) {
  auto ret = ImGui::GetKeyPressedAmount(static_cast<ImGuiKey>(key), repeat_delay, rate);
  return ret;
}

ImVec2 GetMouseDragDelta(sol::optional<ImGuiMouseButton> button, sol::optional<float> lock_threshold) {
  ImGuiMouseButton button_v = static_cast<ImGuiMouseButton>(button.value_or(0));
  float lock_threshold_v = lock_threshold.value_or(-1.0f);
  auto ret = ImGui::GetMouseDragDelta(button_v, lock_threshold_v);
  return ret;
}

float GetScrollMaxX() {
  auto ret = ImGui::GetScrollMaxX();
  return ret;
}

float GetScrollY() {
  auto ret = ImGui::GetScrollY();
  return ret;
}

float GetTextLineHeightWithSpacing() {
  auto ret = ImGui::GetTextLineHeightWithSpacing();
  return ret;
}

std::string GetVersion() {
  const char* ret = ImGui::GetVersion();
  return std::string(ret ? ret : "");
}

float GetWindowHeight() {
  auto ret = ImGui::GetWindowHeight();
  return ret;
}

float GetWindowWidth() {
  auto ret = ImGui::GetWindowWidth();
  return ret;
}

std::tuple<float, bool> InputFloat(const std::string& label, float v, sol::optional<float> step, sol::optional<float> step_fast, sol::optional<std::string> format, sol::optional<ImGuiInputTextFlags> flags) {
  float v_v = v;
  float step_v = step.value_or(0.0f);
  float step_fast_v = step_fast.value_or(0.0f);
  std::string format_v = format.value_or(std::string("%.3f"));
  ImGuiInputTextFlags flags_v = static_cast<ImGuiInputTextFlags>(flags.value_or(0));
  auto ret = ImGui::InputFloat(label.c_str(), &v_v, step_v, step_fast_v, format_v.c_str(), flags_v);
  return std::make_tuple(v_v, ret);
}

bool IsAnyItemActive() {
  auto ret = ImGui::IsAnyItemActive();
  return ret;
}

bool IsAnyMouseDown() {
  auto ret = ImGui::IsAnyMouseDown();
  return ret;
}

bool IsItemClicked(sol::optional<ImGuiMouseButton> mouse_button) {
  ImGuiMouseButton mouse_button_v = static_cast<ImGuiMouseButton>(mouse_button.value_or(0));
  auto ret = ImGui::IsItemClicked(mouse_button_v);
  return ret;
}

bool IsItemEdited() {
  auto ret = ImGui::IsItemEdited();
  return ret;
}

bool IsItemToggledOpen() {
  auto ret = ImGui::IsItemToggledOpen();
  return ret;
}

bool IsKeyChordPressed(ImGuiKeyChord key_chord) {
  auto ret = ImGui::IsKeyChordPressed(static_cast<ImGuiKeyChord>(key_chord));
  return ret;
}

bool IsKeyReleased(ImGuiKey key) {
  auto ret = ImGui::IsKeyReleased(static_cast<ImGuiKey>(key));
  return ret;
}

bool IsMouseDown(ImGuiMouseButton button) {
  auto ret = ImGui::IsMouseDown(static_cast<ImGuiMouseButton>(button));
  return ret;
}

bool IsMouseReleased(ImGuiMouseButton button) {
  auto ret = ImGui::IsMouseReleased(static_cast<ImGuiMouseButton>(button));
  return ret;
}

bool IsWindowAppearing() {
  auto ret = ImGui::IsWindowAppearing();
  return ret;
}

bool IsWindowHovered(sol::optional<ImGuiHoveredFlags> flags) {
  ImGuiHoveredFlags flags_v = static_cast<ImGuiHoveredFlags>(flags.value_or(0));
  auto ret = ImGui::IsWindowHovered(flags_v);
  return ret;
}

void LogButtons() {
  ImGui::LogButtons();
}

void LogToFile(sol::optional<int> auto_open_depth, sol::optional<std::string> filename) {
  int auto_open_depth_v = auto_open_depth.value_or(-1);
  std::string filename_v = filename.value_or(std::string());
  ImGui::LogToFile(auto_open_depth_v, filename_v.c_str());
}

void NewLine() {
  ImGui::NewLine();
}

void PopButtonRepeat() {
  ImGui::PopButtonRepeat();
}

void PopID() {
  ImGui::PopID();
}

void PopStyleColor(sol::optional<int> count) {
  int count_v = count.value_or(1);
  ImGui::PopStyleColor(count_v);
}

void PopTextWrapPos() {
  ImGui::PopTextWrapPos();
}

void PushClipRect(const ImVec2& clip_rect_min, const ImVec2& clip_rect_max, bool intersect_with_current_clip_rect) {
  ImGui::PushClipRect(clip_rect_min, clip_rect_max, intersect_with_current_clip_rect);
}

void PushStyleVarX(ImGuiStyleVar idx, float val_x) {
  ImGui::PushStyleVarX(static_cast<ImGuiStyleVar>(idx), val_x);
}

void PushTextWrapPos(sol::optional<float> wrap_local_pos_x) {
  float wrap_local_pos_x_v = wrap_local_pos_x.value_or(0.0f);
  ImGui::PushTextWrapPos(wrap_local_pos_x_v);
}

void SameLine(sol::optional<float> offset_from_start_x, sol::optional<float> spacing) {
  float offset_from_start_x_v = offset_from_start_x.value_or(0.0f);
  float spacing_v = spacing.value_or(-1.0f);
  ImGui::SameLine(offset_from_start_x_v, spacing_v);
}

void SeparatorText(const std::string& label) {
  ImGui::SeparatorText(label.c_str());
}

void SetColumnOffset(int column_index, float offset_x) {
  ImGui::SetColumnOffset(column_index, offset_x);
}

void SetCursorPosX(float local_x) {
  ImGui::SetCursorPosX(local_x);
}

void SetItemDefaultFocus() {
  ImGui::SetItemDefaultFocus();
}

void SetMouseCursor(ImGuiMouseCursor cursor_type) {
  ImGui::SetMouseCursor(static_cast<ImGuiMouseCursor>(cursor_type));
}

void SetNextFrameWantCaptureMouse(bool want_capture_mouse) {
  ImGui::SetNextFrameWantCaptureMouse(want_capture_mouse);
}

void SetNextItemShortcut(ImGuiKeyChord key_chord, sol::optional<ImGuiInputFlags> flags) {
  ImGuiInputFlags flags_v = static_cast<ImGuiInputFlags>(flags.value_or(0));
  ImGui::SetNextItemShortcut(static_cast<ImGuiKeyChord>(key_chord), flags_v);
}

void SetNextWindowBgAlpha(float alpha) {
  ImGui::SetNextWindowBgAlpha(alpha);
}

void SetNextWindowFocus() {
  ImGui::SetNextWindowFocus();
}

void SetNextWindowSize(const ImVec2& size, sol::optional<ImGuiCond> cond) {
  ImGuiCond cond_v = static_cast<ImGuiCond>(cond.value_or(0));
  ImGui::SetNextWindowSize(size, cond_v);
}

void SetScrollHereX(sol::optional<float> center_x_ratio) {
  float center_x_ratio_v = center_x_ratio.value_or(0.5f);
  ImGui::SetScrollHereX(center_x_ratio_v);
}

void SetScrollY(float scroll_y) {
  ImGui::SetScrollY(scroll_y);
}

bool Shortcut(ImGuiKeyChord key_chord, sol::optional<ImGuiInputFlags> flags) {
  ImGuiInputFlags flags_v = static_cast<ImGuiInputFlags>(flags.value_or(0));
  auto ret = ImGui::Shortcut(static_cast<ImGuiKeyChord>(key_chord), flags_v);
  return ret;
}

void ShowUserGuide() {
  ImGui::ShowUserGuide();
}

std::tuple<int, bool> SliderInt(const std::string& label, int v, int v_min, int v_max, sol::optional<std::string> format, sol::optional<ImGuiSliderFlags> flags) {
  int v_v = v;
  std::string format_v = format.value_or(std::string("%d"));
  ImGuiSliderFlags flags_v = static_cast<ImGuiSliderFlags>(flags.value_or(0));
  auto ret = ImGui::SliderInt(label.c_str(), &v_v, v_min, v_max, format_v.c_str(), flags_v);
  return std::make_tuple(v_v, ret);
}

bool TabItemButton(const std::string& label, sol::optional<ImGuiTabItemFlags> flags) {
  ImGuiTabItemFlags flags_v = static_cast<ImGuiTabItemFlags>(flags.value_or(0));
  auto ret = ImGui::TabItemButton(label.c_str(), flags_v);
  return ret;
}

ImGuiTableColumnFlags TableGetColumnFlags(sol::optional<int> column_n) {
  int column_n_v = column_n.value_or(-1);
  auto ret = ImGui::TableGetColumnFlags(column_n_v);
  return ret;
}

int TableGetHoveredColumn() {
  auto ret = ImGui::TableGetHoveredColumn();
  return ret;
}

void TableHeadersRow() {
  ImGui::TableHeadersRow();
}

void TableSetBgColor(ImGuiTableBgTarget target, ImU32 color, sol::optional<int> column_n) {
  int column_n_v = column_n.value_or(-1);
  ImGui::TableSetBgColor(static_cast<ImGuiTableBgTarget>(target), static_cast<ImU32>(color), column_n_v);
}

void TableSetupColumn(const std::string& label, sol::optional<ImGuiTableColumnFlags> flags, sol::optional<float> init_width_or_weight, sol::optional<ImGuiID> user_data) {
  ImGuiTableColumnFlags flags_v = static_cast<ImGuiTableColumnFlags>(flags.value_or(0));
  float init_width_or_weight_v = init_width_or_weight.value_or(0.0f);
  ImGuiID user_data_v = static_cast<ImGuiID>(user_data.value_or(0));
  ImGui::TableSetupColumn(label.c_str(), flags_v, init_width_or_weight_v, user_data_v);
}

bool TextLinkOpenURL(const std::string& label, sol::optional<std::string> url) {
  std::string url_v = url.value_or(std::string());
  auto ret = ImGui::TextLinkOpenURL(label.c_str(), url_v.c_str());
  return ret;
}

void TreePop() {
  ImGui::TreePop();
}

std::tuple<int, bool> VSliderInt(const std::string& label, const ImVec2& size, int v, int v_min, int v_max, sol::optional<std::string> format, sol::optional<ImGuiSliderFlags> flags) {
  int v_v = v;
  std::string format_v = format.value_or(std::string("%d"));
  ImGuiSliderFlags flags_v = static_cast<ImGuiSliderFlags>(flags.value_or(0));
  auto ret = ImGui::VSliderInt(label.c_str(), size, &v_v, v_min, v_max, format_v.c_str(), flags_v);
  return std::make_tuple(v_v, ret);
}

}  // namespace

void InitGenerated_0(sol::table& t) {
  t.set_function("AlignTextToFramePadding", AlignTextToFramePadding);
  t.set_function("BeginDisabled", BeginDisabled);
  t.set_function("BeginGroup", BeginGroup);
  t.set_function("BeginMainMenuBar", BeginMainMenuBar);
  t.set_function("BeginPopup", BeginPopup);
  t.set_function("BeginPopupContextWindow", BeginPopupContextWindow);
  t.set_function("BeginTooltip", BeginTooltip);
  t.set_function("CalcItemWidth", CalcItemWidth);
  t.set_function("CloseCurrentPopup", CloseCurrentPopup);
  t.set_function("ColorConvertHSVtoRGB", ColorConvertHSVtoRGB);
  t.set_function("Columns", Columns);
  t.set_function("DebugStartItemPicker", DebugStartItemPicker);
  t.set_function("DragFloatRange2", DragFloatRange2);
  t.set_function("Dummy", Dummy);
  t.set_function("EndCombo", EndCombo);
  t.set_function("EndDragDropTarget", EndDragDropTarget);
  t.set_function("EndListBox", EndListBox);
  t.set_function("EndMenuBar", EndMenuBar);
  t.set_function("EndTabItem", EndTabItem);
  t.set_function("GetClipboardText", GetClipboardText);
  t.set_function("GetColumnWidth", GetColumnWidth);
  t.set_function("GetContentRegionMax", GetContentRegionMax);
  t.set_function("GetCursorPosY", GetCursorPosY);
  t.set_function("GetFontSize", GetFontSize);
  t.set_function("GetFrameHeight", GetFrameHeight);
  t.set_function("GetItemFlags", GetItemFlags);
  t.set_function("GetItemRectMin", GetItemRectMin);
  t.set_function("GetKeyPressedAmount", GetKeyPressedAmount);
  t.set_function("GetMouseDragDelta", GetMouseDragDelta);
  t.set_function("GetScrollMaxX", GetScrollMaxX);
  t.set_function("GetScrollY", GetScrollY);
  t.set_function("GetTextLineHeightWithSpacing", GetTextLineHeightWithSpacing);
  t.set_function("GetVersion", GetVersion);
  t.set_function("GetWindowHeight", GetWindowHeight);
  t.set_function("GetWindowWidth", GetWindowWidth);
  t.set_function("InputFloat", InputFloat);
  t.set_function("IsAnyItemActive", IsAnyItemActive);
  t.set_function("IsAnyMouseDown", IsAnyMouseDown);
  t.set_function("IsItemClicked", IsItemClicked);
  t.set_function("IsItemEdited", IsItemEdited);
  t.set_function("IsItemToggledOpen", IsItemToggledOpen);
  t.set_function("IsKeyChordPressed", IsKeyChordPressed);
  t.set_function("IsKeyReleased", IsKeyReleased);
  t.set_function("IsMouseDown", IsMouseDown);
  t.set_function("IsMouseReleased", IsMouseReleased);
  t.set_function("IsWindowAppearing", IsWindowAppearing);
  t.set_function("IsWindowHovered", IsWindowHovered);
  t.set_function("LogButtons", LogButtons);
  t.set_function("LogToFile", LogToFile);
  t.set_function("NewLine", NewLine);
  t.set_function("PopButtonRepeat", PopButtonRepeat);
  t.set_function("PopID", PopID);
  t.set_function("PopStyleColor", PopStyleColor);
  t.set_function("PopTextWrapPos", PopTextWrapPos);
  t.set_function("PushClipRect", PushClipRect);
  t.set_function("PushStyleVarX", PushStyleVarX);
  t.set_function("PushTextWrapPos", PushTextWrapPos);
  t.set_function("SameLine", SameLine);
  t.set_function("SeparatorText", SeparatorText);
  t.set_function("SetColumnOffset", SetColumnOffset);
  t.set_function("SetCursorPosX", SetCursorPosX);
  t.set_function("SetItemDefaultFocus", SetItemDefaultFocus);
  t.set_function("SetMouseCursor", SetMouseCursor);
  t.set_function("SetNextFrameWantCaptureMouse", SetNextFrameWantCaptureMouse);
  t.set_function("SetNextItemShortcut", SetNextItemShortcut);
  t.set_function("SetNextWindowBgAlpha", SetNextWindowBgAlpha);
  t.set_function("SetNextWindowFocus", SetNextWindowFocus);
  t.set_function("SetNextWindowSize", SetNextWindowSize);
  t.set_function("SetScrollHereX", SetScrollHereX);
  t.set_function("SetScrollY", SetScrollY);
  t.set_function("Shortcut", Shortcut);
  t.set_function("ShowUserGuide", ShowUserGuide);
  t.set_function("SliderInt", SliderInt);
  t.set_function("TabItemButton", TabItemButton);
  t.set_function("TableGetColumnFlags", TableGetColumnFlags);
  t.set_function("TableGetHoveredColumn", TableGetHoveredColumn);
  t.set_function("TableHeadersRow", TableHeadersRow);
  t.set_function("TableSetBgColor", TableSetBgColor);
  t.set_function("TableSetupColumn", TableSetupColumn);
  t.set_function("TextLinkOpenURL", TextLinkOpenURL);
  t.set_function("TreePop", TreePop);
  t.set_function("VSliderInt", VSliderInt);
}
}  // namespace sol_ImGui
