// GENERATED FILE -- DO NOT EDIT BY HAND.
// Produced by codegen/generate.py from codegen/metadata/dcimgui.json.
// Regenerate with the `regen-bindings` CMake target; see CONTRIBUTING.md.

#include "sol_ImGui.h"

namespace sol_ImGui {
namespace {

bool ArrowButton(const std::string& str_id, ImGuiDir dir) {
  auto ret = ImGui::ArrowButton(str_id.c_str(), static_cast<ImGuiDir>(dir));
  return ret;
}

bool BeginDragDropSource(sol::optional<ImGuiDragDropFlags> flags) {
  ImGuiDragDropFlags flags_v = static_cast<ImGuiDragDropFlags>(flags.value_or(0));
  auto ret = ImGui::BeginDragDropSource(flags_v);
  return ret;
}

bool BeginItemTooltip() {
  auto ret = ImGui::BeginItemTooltip();
  return ret;
}

bool BeginMenu(const std::string& label, sol::optional<bool> enabled) {
  bool enabled_v = enabled.value_or(true);
  auto ret = ImGui::BeginMenu(label.c_str(), enabled_v);
  return ret;
}

bool BeginPopupContextItem(sol::optional<std::string> str_id, sol::optional<ImGuiPopupFlags> popup_flags) {
  std::string str_id_v = str_id.value_or(std::string());
  ImGuiPopupFlags popup_flags_v = static_cast<ImGuiPopupFlags>(popup_flags.value_or(0));
  auto ret = ImGui::BeginPopupContextItem(str_id_v.c_str(), popup_flags_v);
  return ret;
}

bool BeginTabBar(const std::string& str_id, sol::optional<ImGuiTabBarFlags> flags) {
  ImGuiTabBarFlags flags_v = static_cast<ImGuiTabBarFlags>(flags.value_or(0));
  auto ret = ImGui::BeginTabBar(str_id.c_str(), flags_v);
  return ret;
}

void Bullet() {
  ImGui::Bullet();
}

ImVec2 CalcTextSize(const std::string& text, sol::optional<std::string> text_end, sol::optional<bool> hide_text_after_double_hash, sol::optional<float> wrap_width) {
  std::string text_end_v = text_end.value_or(std::string());
  bool hide_text_after_double_hash_v = hide_text_after_double_hash.value_or(false);
  float wrap_width_v = wrap_width.value_or(-1.0f);
  auto ret = ImGui::CalcTextSize(text.c_str(), text_end_v.c_str(), hide_text_after_double_hash_v, wrap_width_v);
  return ret;
}

bool ColorButton(const std::string& desc_id, const ImVec4& col, sol::optional<ImGuiColorEditFlags> flags, sol::optional<ImVec2> size) {
  ImGuiColorEditFlags flags_v = static_cast<ImGuiColorEditFlags>(flags.value_or(0));
  ImVec2 size_v = size.value_or(ImVec2(0, 0));
  auto ret = ImGui::ColorButton(desc_id.c_str(), col, flags_v, size_v);
  return ret;
}

std::tuple<float, float, float> ColorConvertRGBtoHSV(float r, float g, float b, float out_h, float out_s, float out_v) {
  float out_h_v = out_h;
  float out_s_v = out_s;
  float out_v_v = out_v;
  ImGui::ColorConvertRGBtoHSV(r, g, b, out_h_v, out_s_v, out_v_v);
  return std::make_tuple(out_h_v, out_s_v, out_v_v);
}

bool DebugCheckVersionAndDataLayout(const std::string& version_str, size_t sz_io, size_t sz_style, size_t sz_vec2, size_t sz_vec4, size_t sz_drawvert, size_t sz_drawidx) {
  auto ret = ImGui::DebugCheckVersionAndDataLayout(version_str.c_str(), static_cast<size_t>(sz_io), static_cast<size_t>(sz_style), static_cast<size_t>(sz_vec2), static_cast<size_t>(sz_vec4), static_cast<size_t>(sz_drawvert), static_cast<size_t>(sz_drawidx));
  return ret;
}

void DebugTextEncoding(const std::string& text) {
  ImGui::DebugTextEncoding(text.c_str());
}

std::tuple<int, bool> DragInt(const std::string& label, int v, sol::optional<float> v_speed, sol::optional<int> v_min, sol::optional<int> v_max, sol::optional<std::string> format, sol::optional<ImGuiSliderFlags> flags) {
  int v_v = v;
  float v_speed_v = v_speed.value_or(1.0f);
  int v_min_v = v_min.value_or(0);
  int v_max_v = v_max.value_or(0);
  std::string format_v = format.value_or(std::string("%d"));
  ImGuiSliderFlags flags_v = static_cast<ImGuiSliderFlags>(flags.value_or(0));
  auto ret = ImGui::DragInt(label.c_str(), &v_v, v_speed_v, v_min_v, v_max_v, format_v.c_str(), flags_v);
  return std::make_tuple(v_v, ret);
}

void End() {
  ImGui::End();
}

void EndDisabled() {
  ImGui::EndDisabled();
}

void EndFrame() {
  ImGui::EndFrame();
}

void EndMainMenuBar() {
  ImGui::EndMainMenuBar();
}

void EndPopup() {
  ImGui::EndPopup();
}

void EndTable() {
  ImGui::EndTable();
}

int GetColumnIndex() {
  auto ret = ImGui::GetColumnIndex();
  return ret;
}

int GetColumnsCount() {
  auto ret = ImGui::GetColumnsCount();
  return ret;
}

ImVec2 GetCursorPos() {
  auto ret = ImGui::GetCursorPos();
  return ret;
}

ImVec2 GetCursorScreenPos() {
  auto ret = ImGui::GetCursorScreenPos();
  return ret;
}

ImVec2 GetFontTexUvWhitePixel() {
  auto ret = ImGui::GetFontTexUvWhitePixel();
  return ret;
}

float GetFrameHeightWithSpacing() {
  auto ret = ImGui::GetFrameHeightWithSpacing();
  return ret;
}

ImGuiID GetItemID() {
  auto ret = ImGui::GetItemID();
  return ret;
}

ImVec2 GetItemRectSize() {
  auto ret = ImGui::GetItemRectSize();
  return ret;
}

int GetMouseClickedCount(ImGuiMouseButton button) {
  auto ret = ImGui::GetMouseClickedCount(static_cast<ImGuiMouseButton>(button));
  return ret;
}

ImVec2 GetMousePos() {
  auto ret = ImGui::GetMousePos();
  return ret;
}

float GetScrollMaxY() {
  auto ret = ImGui::GetScrollMaxY();
  return ret;
}

std::string GetStyleColorName(ImGuiCol idx) {
  const char* ret = ImGui::GetStyleColorName(static_cast<ImGuiCol>(idx));
  return std::string(ret ? ret : "");
}

double GetTime() {
  auto ret = ImGui::GetTime();
  return ret;
}

ImVec2 GetWindowContentRegionMax() {
  auto ret = ImGui::GetWindowContentRegionMax();
  return ret;
}

ImVec2 GetWindowPos() {
  auto ret = ImGui::GetWindowPos();
  return ret;
}

void Indent(sol::optional<float> indent_w) {
  float indent_w_v = indent_w.value_or(0.0f);
  ImGui::Indent(indent_w_v);
}

std::tuple<int, bool> InputInt(const std::string& label, int v, sol::optional<int> step, sol::optional<int> step_fast, sol::optional<ImGuiInputTextFlags> flags) {
  int v_v = v;
  int step_v = step.value_or(1);
  int step_fast_v = step_fast.value_or(100);
  ImGuiInputTextFlags flags_v = static_cast<ImGuiInputTextFlags>(flags.value_or(0));
  auto ret = ImGui::InputInt(label.c_str(), &v_v, step_v, step_fast_v, flags_v);
  return std::make_tuple(v_v, ret);
}

bool IsAnyItemFocused() {
  auto ret = ImGui::IsAnyItemFocused();
  return ret;
}

bool IsItemActivated() {
  auto ret = ImGui::IsItemActivated();
  return ret;
}

bool IsItemDeactivated() {
  auto ret = ImGui::IsItemDeactivated();
  return ret;
}

bool IsItemFocused() {
  auto ret = ImGui::IsItemFocused();
  return ret;
}

bool IsItemToggledSelection() {
  auto ret = ImGui::IsItemToggledSelection();
  return ret;
}

bool IsKeyDown(ImGuiKey key) {
  auto ret = ImGui::IsKeyDown(static_cast<ImGuiKey>(key));
  return ret;
}

bool IsMouseClicked(ImGuiMouseButton button, sol::optional<bool> repeat) {
  bool repeat_v = repeat.value_or(false);
  auto ret = ImGui::IsMouseClicked(static_cast<ImGuiMouseButton>(button), repeat_v);
  return ret;
}

bool IsMouseDragging(ImGuiMouseButton button, sol::optional<float> lock_threshold) {
  float lock_threshold_v = lock_threshold.value_or(-1.0f);
  auto ret = ImGui::IsMouseDragging(static_cast<ImGuiMouseButton>(button), lock_threshold_v);
  return ret;
}

bool IsMouseReleasedWithDelay(ImGuiMouseButton button, sol::optional<float> delay) {
  float delay_v = delay.value_or(-1.f);
  auto ret = ImGui::IsMouseReleasedWithDelay(static_cast<ImGuiMouseButton>(button), delay_v);
  return ret;
}

bool IsWindowCollapsed() {
  auto ret = ImGui::IsWindowCollapsed();
  return ret;
}

void LoadIniSettingsFromDisk(const std::string& ini_filename) {
  ImGui::LoadIniSettingsFromDisk(ini_filename.c_str());
}

void LogFinish() {
  ImGui::LogFinish();
}

void LogToTTY(sol::optional<int> auto_open_depth) {
  int auto_open_depth_v = auto_open_depth.value_or(-1);
  ImGui::LogToTTY(auto_open_depth_v);
}

void NextColumn() {
  ImGui::NextColumn();
}

void PopClipRect() {
  ImGui::PopClipRect();
}

void PopItemFlag() {
  ImGui::PopItemFlag();
}

void PopStyleVar(sol::optional<int> count) {
  int count_v = count.value_or(1);
  ImGui::PopStyleVar(count_v);
}

void ProgressBar(float fraction, sol::optional<ImVec2> size_arg, sol::optional<std::string> overlay) {
  ImVec2 size_arg_v = size_arg.value_or(ImVec2(-FLT_MIN, 0));
  std::string overlay_v = overlay.value_or(std::string());
  ImGui::ProgressBar(fraction, size_arg_v, overlay_v.c_str());
}

void PushItemFlag(ImGuiItemFlags option, bool enabled) {
  ImGui::PushItemFlag(static_cast<ImGuiItemFlags>(option), enabled);
}

void PushStyleVarY(ImGuiStyleVar idx, float val_y) {
  ImGui::PushStyleVarY(static_cast<ImGuiStyleVar>(idx), val_y);
}

void Render() {
  ImGui::Render();
}

void SaveIniSettingsToDisk(const std::string& ini_filename) {
  ImGui::SaveIniSettingsToDisk(ini_filename.c_str());
}

void SetClipboardText(const std::string& text) {
  ImGui::SetClipboardText(text.c_str());
}

void SetColumnWidth(int column_index, float width) {
  ImGui::SetColumnWidth(column_index, width);
}

void SetCursorPosY(float local_y) {
  ImGui::SetCursorPosY(local_y);
}

bool SetItemKeyOwner(ImGuiKey key) {
  auto ret = ImGui::SetItemKeyOwner(static_cast<ImGuiKey>(key));
  return ret;
}

void SetNavCursorVisible(bool visible) {
  ImGui::SetNavCursorVisible(visible);
}

void SetNextItemAllowOverlap() {
  ImGui::SetNextItemAllowOverlap();
}

void SetNextItemStorageID(ImGuiID storage_id) {
  ImGui::SetNextItemStorageID(static_cast<ImGuiID>(storage_id));
}

void SetNextWindowCollapsed(bool collapsed, sol::optional<ImGuiCond> cond) {
  ImGuiCond cond_v = static_cast<ImGuiCond>(cond.value_or(0));
  ImGui::SetNextWindowCollapsed(collapsed, cond_v);
}

void SetNextWindowPos(const ImVec2& pos, sol::optional<ImGuiCond> cond, sol::optional<ImVec2> pivot) {
  ImGuiCond cond_v = static_cast<ImGuiCond>(cond.value_or(0));
  ImVec2 pivot_v = pivot.value_or(ImVec2(0, 0));
  ImGui::SetNextWindowPos(pos, cond_v, pivot_v);
}

void SetScrollFromPosX(float local_x, sol::optional<float> center_x_ratio) {
  float center_x_ratio_v = center_x_ratio.value_or(0.5f);
  ImGui::SetScrollFromPosX(local_x, center_x_ratio_v);
}

void SetScrollHereY(sol::optional<float> center_y_ratio) {
  float center_y_ratio_v = center_y_ratio.value_or(0.5f);
  ImGui::SetScrollHereY(center_y_ratio_v);
}

void SetTabItemClosed(const std::string& tab_or_docked_window_label) {
  ImGui::SetTabItemClosed(tab_or_docked_window_label.c_str());
}

void ShowFontSelector(const std::string& label) {
  ImGui::ShowFontSelector(label.c_str());
}

std::tuple<float, bool> SliderAngle(const std::string& label, float v_rad, sol::optional<float> v_degrees_min, sol::optional<float> v_degrees_max, sol::optional<std::string> format, sol::optional<ImGuiSliderFlags> flags) {
  float v_rad_v = v_rad;
  float v_degrees_min_v = v_degrees_min.value_or(-360.0f);
  float v_degrees_max_v = v_degrees_max.value_or(+360.0f);
  std::string format_v = format.value_or(std::string("%.0f deg"));
  ImGuiSliderFlags flags_v = static_cast<ImGuiSliderFlags>(flags.value_or(0));
  auto ret = ImGui::SliderAngle(label.c_str(), &v_rad_v, v_degrees_min_v, v_degrees_max_v, format_v.c_str(), flags_v);
  return std::make_tuple(v_rad_v, ret);
}

bool SmallButton(const std::string& label) {
  auto ret = ImGui::SmallButton(label.c_str());
  return ret;
}

void TableAngledHeadersRow() {
  ImGui::TableAngledHeadersRow();
}

int TableGetColumnIndex() {
  auto ret = ImGui::TableGetColumnIndex();
  return ret;
}

int TableGetRowIndex() {
  auto ret = ImGui::TableGetRowIndex();
  return ret;
}

bool TableNextColumn() {
  auto ret = ImGui::TableNextColumn();
  return ret;
}

void TableSetColumnEnabled(int column_n, bool v) {
  ImGui::TableSetColumnEnabled(column_n, v);
}

void TableSetupScrollFreeze(int cols, int rows) {
  ImGui::TableSetupScrollFreeze(cols, rows);
}

void TextUnformatted(const std::string& text, sol::optional<std::string> text_end) {
  std::string text_end_v = text_end.value_or(std::string());
  ImGui::TextUnformatted(text.c_str(), text_end_v.c_str());
}

void Unindent(sol::optional<float> indent_w) {
  float indent_w_v = indent_w.value_or(0.0f);
  ImGui::Unindent(indent_w_v);
}

}  // namespace

void InitGenerated_1(sol::table& t) {
  t.set_function("ArrowButton", ArrowButton);
  t.set_function("BeginDragDropSource", BeginDragDropSource);
  t.set_function("BeginItemTooltip", BeginItemTooltip);
  t.set_function("BeginMenu", BeginMenu);
  t.set_function("BeginPopupContextItem", BeginPopupContextItem);
  t.set_function("BeginTabBar", BeginTabBar);
  t.set_function("Bullet", Bullet);
  t.set_function("CalcTextSize", CalcTextSize);
  t.set_function("ColorButton", ColorButton);
  t.set_function("ColorConvertRGBtoHSV", ColorConvertRGBtoHSV);
  t.set_function("DebugCheckVersionAndDataLayout", DebugCheckVersionAndDataLayout);
  t.set_function("DebugTextEncoding", DebugTextEncoding);
  t.set_function("DragInt", DragInt);
  t.set_function("End", End);
  t.set_function("EndDisabled", EndDisabled);
  t.set_function("EndFrame", EndFrame);
  t.set_function("EndMainMenuBar", EndMainMenuBar);
  t.set_function("EndPopup", EndPopup);
  t.set_function("EndTable", EndTable);
  t.set_function("GetColumnIndex", GetColumnIndex);
  t.set_function("GetColumnsCount", GetColumnsCount);
  t.set_function("GetCursorPos", GetCursorPos);
  t.set_function("GetCursorScreenPos", GetCursorScreenPos);
  t.set_function("GetFontTexUvWhitePixel", GetFontTexUvWhitePixel);
  t.set_function("GetFrameHeightWithSpacing", GetFrameHeightWithSpacing);
  t.set_function("GetItemID", GetItemID);
  t.set_function("GetItemRectSize", GetItemRectSize);
  t.set_function("GetMouseClickedCount", GetMouseClickedCount);
  t.set_function("GetMousePos", GetMousePos);
  t.set_function("GetScrollMaxY", GetScrollMaxY);
  t.set_function("GetStyleColorName", GetStyleColorName);
  t.set_function("GetTime", GetTime);
  t.set_function("GetWindowContentRegionMax", GetWindowContentRegionMax);
  t.set_function("GetWindowPos", GetWindowPos);
  t.set_function("Indent", Indent);
  t.set_function("InputInt", InputInt);
  t.set_function("IsAnyItemFocused", IsAnyItemFocused);
  t.set_function("IsItemActivated", IsItemActivated);
  t.set_function("IsItemDeactivated", IsItemDeactivated);
  t.set_function("IsItemFocused", IsItemFocused);
  t.set_function("IsItemToggledSelection", IsItemToggledSelection);
  t.set_function("IsKeyDown", IsKeyDown);
  t.set_function("IsMouseClicked", IsMouseClicked);
  t.set_function("IsMouseDragging", IsMouseDragging);
  t.set_function("IsMouseReleasedWithDelay", IsMouseReleasedWithDelay);
  t.set_function("IsWindowCollapsed", IsWindowCollapsed);
  t.set_function("LoadIniSettingsFromDisk", LoadIniSettingsFromDisk);
  t.set_function("LogFinish", LogFinish);
  t.set_function("LogToTTY", LogToTTY);
  t.set_function("NextColumn", NextColumn);
  t.set_function("PopClipRect", PopClipRect);
  t.set_function("PopItemFlag", PopItemFlag);
  t.set_function("PopStyleVar", PopStyleVar);
  t.set_function("ProgressBar", ProgressBar);
  t.set_function("PushItemFlag", PushItemFlag);
  t.set_function("PushStyleVarY", PushStyleVarY);
  t.set_function("Render", Render);
  t.set_function("SaveIniSettingsToDisk", SaveIniSettingsToDisk);
  t.set_function("SetClipboardText", SetClipboardText);
  t.set_function("SetColumnWidth", SetColumnWidth);
  t.set_function("SetCursorPosY", SetCursorPosY);
  t.set_function("SetItemKeyOwner", SetItemKeyOwner);
  t.set_function("SetNavCursorVisible", SetNavCursorVisible);
  t.set_function("SetNextItemAllowOverlap", SetNextItemAllowOverlap);
  t.set_function("SetNextItemStorageID", SetNextItemStorageID);
  t.set_function("SetNextWindowCollapsed", SetNextWindowCollapsed);
  t.set_function("SetNextWindowPos", SetNextWindowPos);
  t.set_function("SetScrollFromPosX", SetScrollFromPosX);
  t.set_function("SetScrollHereY", SetScrollHereY);
  t.set_function("SetTabItemClosed", SetTabItemClosed);
  t.set_function("ShowFontSelector", ShowFontSelector);
  t.set_function("SliderAngle", SliderAngle);
  t.set_function("SmallButton", SmallButton);
  t.set_function("TableAngledHeadersRow", TableAngledHeadersRow);
  t.set_function("TableGetColumnIndex", TableGetColumnIndex);
  t.set_function("TableGetRowIndex", TableGetRowIndex);
  t.set_function("TableNextColumn", TableNextColumn);
  t.set_function("TableSetColumnEnabled", TableSetColumnEnabled);
  t.set_function("TableSetupScrollFreeze", TableSetupScrollFreeze);
  t.set_function("TextUnformatted", TextUnformatted);
  t.set_function("Unindent", Unindent);
}
}  // namespace sol_ImGui
